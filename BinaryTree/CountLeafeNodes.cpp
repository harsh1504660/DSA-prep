#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inorder(node* root,int &count){ // same logic for preorder and postorder
    //base case
    if(root==NULL){
        return ;
    }
    inorder(root->left,count);    //l

    //leafe node
    if(root->left==NULL && root->right==NULL){
        count++;
    }

    inorder(root->right,count);   //r
}
int noOfleafe(node* root){
    int cnt =0;

}

int main()
{
    
    return 0;
}