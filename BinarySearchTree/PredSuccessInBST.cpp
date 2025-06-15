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

pair<int,int> solve(node* root,int key){
    //find key
    node* temp = root;
    int pred=-1;
    int suc =-1;

    while(temp->data !=key){
        if(temp->data>key){
        suc = temp->data;
        temp=temp->left;
        
        }
        else{
            pred = temp->data;
            temp = temp->right;
            
        }
    }

    //pred and succ

    //pred
    node* leftTree = temp->left;
    while(leftTree !=NULL){
        pred = leftTree->data;
        leftTree =  leftTree->right;
    }

    //succ
        node* rightTree = temp->right;
    while(rightTree !=NULL){
        suc = rightTree->data;
        rightTree =  rightTree->left;
    }

    pair<int,int> ans = make_pair(pred,suc);
    return ans;
}
int main()
{
    
    return 0;
}