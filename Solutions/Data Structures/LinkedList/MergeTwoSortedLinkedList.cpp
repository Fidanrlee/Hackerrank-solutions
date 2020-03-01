/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
    
   if( headA==NULL && headB==NULL)
        return headA;
   if( headA==NULL && headB!=NULL)
        return headB;
   if( headA!=NULL && headB==NULL)
        return headA;
     
   if(headB->data>headA->data){
        if(headA->next!=NULL && headB->data<headA->next->data){
          MergeLists(headA, headB->next); 
            headB->next=headA->next;
            headA->next=headB;
        }
       else if(headA->next==NULL){
        headA->next=headB;
       }
       else 
        MergeLists(headA->next, headB);
           
   }
   else if (headB->data<headA->data){
        MergeLists(headA,headB->next);
       headB->next=headA;
       headA=headB;
    }
    
        return headA;
}
