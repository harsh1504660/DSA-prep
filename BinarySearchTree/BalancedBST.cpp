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

node* inroderToBST(int s,int e,vector<int> inorderVal){
    //base case
    if(s>e){
        return NULL;

    }


    int mid = (s+e)/2;

    node* root = new node(inorderVal[mid]);
    root->left = inroderToBST(s,mid-1,inorderVal);
    root->right = inroderToBST(mid+1,e,inorderVal);
    return root;
}


node* balancedBST(node* root){
    vector<int> inorderVAL;

    inorderTraversel(root,inorderVAL);

    return inroderToBST(0,inorderVAL.size()-1,inorderVAL);
}
int main()
{
    
    return 0;
}