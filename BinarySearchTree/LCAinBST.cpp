#include <iostream>
using namespace std;
class node{
    public : 
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d ;
        this->left = NULL;
        this->right = NULL;
    }
};

node* LCAinBST(node* root,node* p, node* q){
    //base case
    if(root ==NULL){
        return NULL;
    }
    if(root->data < p->data && root->data < q->data){
        return LCAinBST(root->right,p,q);
    }
    if(root->data > p->data && root->data > q->data){
        return LCAinBST(root->left,p,q);
    }

    else{
        return root;
    }
}
int main()
{
    
    return 0;
}