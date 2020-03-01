/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
void PRIGHT(node *root ){
    cout<<root->data<<" ";
    if(root->right!=NULL){
    PRIGHT(root->right);
   }
}

void PLEFT(node *root ){
    if(root->left!=NULL){
    PLEFT(root->left);
    }
    cout<<root->data<<" ";
}

void topView(node * root) {
      if(root->left!=NULL)
      PLEFT(root->left);
      cout<<root->data<<" ";
      if(root->right!=NULL){
      PRIGHT(root->right);}
}
