class LRUCache :public Cache {
   public :
 
    LRUCache (int c)  {cp=c; tail= head=NULL;}
    
    void set(int k, int v) {
        
        if(mp.empty()){
            Node *cur = new Node(k,v);
            tail = head = cur;
            mp[k] = cur;
        }
         
        if( mp.find(k) != mp.end()) {
            
            mp[k]->value = v;
            
            if(mp[k] == head) return;

            
            else if(tail == mp[k]) {
               
                tail = tail->prev;
                delete tail->next;
                tail->next = NULL;
            mp[k]=new Node(NULL,head,k,v);
            head->prev = mp[k]; 
            head = mp[k];
                
            }
          
            else{
                
            mp[k]->next->prev = mp[k]->prev;
            mp[k]->prev->next = mp[k]->next;
            mp.erase(k);
            mp[k] = new Node(NULL,head,k,v);
            head->prev = mp[k]; 
            head = mp[k];
                
            }
           
        }
        else {
            
            mp[k] = new Node(NULL,head,k,v);
            head->prev = mp[k]; 
            head = mp[k];
            
            if(mp.size() > cp){
                tail = tail->prev;
                 mp.erase(tail->next->key); 
                delete tail->next; 
                tail->next = NULL;
            }
        }
    }                            
    
    int get(int k) {
        if(  mp.find(k) != mp.end() )
            return mp[k]->value;
            return -1;                             
   }
    ~LRUCache (){}
};
