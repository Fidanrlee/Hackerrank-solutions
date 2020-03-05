/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
   int i=0;
    Node *root=head;
    while(root->next!=NULL){
       root=root->next;
        i++;
    }
     int k=i-positionFromTail;
   i=0;
    root=head;
   while(i!=k){
       root=root->next;
        i++;
    }
    
    return root->data;
}
