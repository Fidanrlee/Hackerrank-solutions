/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *temp=(Node *)malloc(sizeof(Node));
    temp->data=data;
    temp->next=NULL;
      
    if(head==NULL){
        head=(Node *)malloc(sizeof(Node));
        head->data=data;
        head->next=NULL;
        }
    else{
        Node *tail= (Node *)malloc(sizeof(Node));
        tail=head;
        while(tail->next!=NULL){
           tail=tail->next; 
            }
        tail->next=temp;
    }
    return head;
  // Complete this method
}
