#include <iostream>
using namespace std;
#include<vector>
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


void traverselLeft(node* root,vector<int> &ans)
{
    //base case
    if(root==NULL){
        return;
    }
    if(root ->left == NULL && root->right==NULL){
        return ;
    }

    ans.push_back(root->data);
    if(root->left){
        traverselLeft(root->left,ans);
    }
    else{
        traverselLeft(root->right,ans);
    }
}

void traverseLeaf(node* root,vector<int> &ans){
    //base case
    if(root ==NULL){
        return ;
    }

    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return ;
    }

    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);

}

void traverseRight(node* root ,vector<int> &ans){
    //base case
    if(root ==NULL){
        return ;
    }
    if(root->left==NULL && root->right==NULL){
        return ;
    }

    if(root->right){
        traverseRight(root->right,ans);
    }

    else{
        traverseRight(root->left,ans);
    }

    //wapas ayagae
    ans.push_back(root->data);
}

vector<int> Boundry(node* root){
    vector<int> ans;
    if(root ==NULL){
        return ans;
    }

    ans.push_back(root->data);

    //left part stroing
    traverselLeft(root->left,ans);

    //traverse leafe node
    //left subtree
    traverseLeaf(root->left,ans);

    //right subtree
    traverseLeaf(root->right,ans);


    //traverse right portion 
    traverseRight(root->right,ans);
    return ans;
}
int main()
{
    
    return 0;
}