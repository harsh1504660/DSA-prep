#include <iostream>
#include<vector>
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
void inorderTraversel(node* root,vector<int> &inorder){
    if(root==NULL){
        return ;
    }
    inorderTraversel(root->left,inorder);
    inorder.push_back(root->data);
    inorderTraversel(root->right,inorder);

}

node* flatten(node* root){
    vector<int> inroderVal ;

    inorderTraversel(root,inroderVal);

    int n = inroderVal.size();
    node* newRoot = new node(inroderVal[0]);

    node* curr = newRoot;

    for(int i =1;i<n;i++){
        node* temp = new node(inroderVal[i]);

        curr->left=NULL;
        curr->right = temp;
        curr = temp;
    }

    //last node
    curr->left =NULL;
    curr->right =NULL;

    return newRoot;





}
int main()
{
    
    return 0;
}