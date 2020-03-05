
/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        int h1=0;
        int h2=0;
        int h=0;
        if(root->left!=NULL)
            h1=height(root->left)+1;
         if(root->right!=NULL)
            h2=height(root->right)+1;
        // Write your code here.
        if(h1>h2)
            h=h1;
        else
            h=h2;
        return h;
    }
