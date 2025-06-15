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

pair<int,int> solve(node* root, int key){
    node* temp = root;
    int pred = -1;
    int suc = -1;

    // Step 1: Search for the key, and update pred/suc on the go
    while(temp != NULL){
        if(temp->data == key){
            break;
        }
        else if(temp->data > key){
            suc = temp->data;
            temp = temp->left;
        }
        else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    // Step 2: If key doesn't exist
    if(temp == NULL){
        return {pred, suc}; // Key not present, return best pred/succ so far
    }

    // Step 3: If key exists, find more accurate pred and succ
    // Pred from left subtree (max of left subtree)
    node* leftTree = temp->left;
    while(leftTree != NULL){
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    // Succ from right subtree (min of right subtree)
    node* rightTree = temp->right;
    while(rightTree != NULL){
        suc = rightTree->data;
        rightTree = rightTree->left;
    }

    return {pred, suc};
}
int main()
{
    
    return 0;
}