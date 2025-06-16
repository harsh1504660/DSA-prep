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

bool TwoSum(node* root,int target){
    vector<int> inroderVal ;

    inorderTraversel(root,inroderVal);
    int i =0,j = inroderVal.size()-1;

    while(i<j){
        int sum = inroderVal[i] + inroderVal[j];

        if(sum==target){
            return true;
        }
        else if (sum>target){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}
int main()
{
    
    return 0;
}