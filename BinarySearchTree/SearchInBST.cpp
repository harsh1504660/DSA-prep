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

bool SearchBst(node* root,int x){
    //base case
    if(root == NULL){
        return false ;
    }
    if(root->data == x){
        return true;
    } 

    if(root->data > x){
        //left part 
        return SearchBst(root->left,x);
    }
        if(root->data < x){
        //right part 
        return SearchBst(root->right,x);
    }
    
}

bool SearchBst2(node* root,int x){
    node *temp = root;

    while(temp!=NULL){
       if (temp->data ==x){
        return true ;
         
       }
       if(temp->data >x ){
        temp = temp->left;
       }
       else{
        temp = temp -> right;
       }
    }
   return false;

}
int main()
{
    
    return 0;
}