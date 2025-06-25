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


int countNode(node* root){
    //base case
    if(root==NULL){
        return 0;
    }
    int ans = 1+countNode(root->left)+countNode(root->right);
    return ans;
}


bool isCBT(node* root,int index,int count){
    if(root==NULL){
        return true;
    }

    if(index >= count){
        return false;
    }

    else{
        bool left = isCBT(root->left,2*index+1,count);
        bool right = isCBT(root->right,2*index+2,count);
        return (left&&right);
    }
}

bool isMaxOder(node* root){
    //base case
    if(root->left==NULL & root->right==NULL){
        return true;
    }
    if(root->right==NULL){
        return (root->data > root->right->data);
    }
    else{
        bool left = isMaxOder(root->left);
        bool right = isMaxOder(root->right);
        return (left && right && (root->data > root->left->data && root->data>root->right->data ));
    }
}

bool isHeap(node* root){
    int index = 0  ; 
    int totoalCount = countNode(root);
    if(isCBT(root,index,totoalCount) && isMaxOder(root))
   return true;
   else{
    return false;
   }
}
int main()
{
    
    return 0;
}