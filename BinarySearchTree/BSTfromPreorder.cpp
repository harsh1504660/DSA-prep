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

node* solve(vector<int> &preorder,int min,int max,int &i){
    if(i>=preorder.size()){
        return NULL;

    }
    if(preorder[i] < min || preorder[i] > max){
        return NULL;

    }


    node* root = new node(preorder[i]);

    root->left = solve(preorder,min,root->data,i);
    root->right = solve(preorder,root->data,max,i);

    return root;
}
node* preorderToBST(vector<int> preorder){
    int mini = INT32_MIN;
    int max = INT32_MAX;
    int i = 0 ; 
    return solve(preorder,mini,max,i);
}
int main()
{
    
    return 0;
}