/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    Node *cur=head;
    if(position==0){
        head=head->next;
        free(cur);
    }
        else{
            int i=0;
       while(i!=position-1){
           cur=cur->next;
           i++;
       }
            Node *temp=cur->next;
            cur->next=temp->next;
            free(temp);
        }
        
    
    return head;
    
  // Complete this method
}
