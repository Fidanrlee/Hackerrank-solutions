/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * &root, int val) {
  if(root == NULL){
        node *tmp = new node;
        tmp->data = val;
        tmp->left = tmp->right = NULL;
        root = tmp;
        return root;
    }
    if(root->data < val){
        insert(root->right, val);
    }else{
        insert(root->left, val);
    }

   return root;
}
