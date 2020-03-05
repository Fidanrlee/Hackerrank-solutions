/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    Node *cur=head;
    
    while(cur!=NULL){
        cout<<cur->data<<"\n";
        cur=cur->next;
        
    }
    
    
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}