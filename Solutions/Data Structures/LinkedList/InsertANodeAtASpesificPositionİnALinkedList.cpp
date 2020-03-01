/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *temp=new Node;
    temp->data=data;
    Node *cur=head;
    
    if(position==0){
        temp->next=head;
        head=temp;
    }
    else{
    int i=0;
    while(i!=position-1){
        cur=cur->next;
        i++;
    }
   temp->next=cur->next;
    cur->next=temp;}

    return head;
}
