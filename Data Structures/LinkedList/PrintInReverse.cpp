/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
    Node *cur=head;
      if(head!=NULL && head->next!=NULL){
        ReversePrint(head->next);
    
}
    if(head!=NULL)
   cout<<head->data<<endl;
    
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
