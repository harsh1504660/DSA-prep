#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};


int findPosition (int in[],int element ,int n){
    for (int i=0;i<n;i++){
        if(in[i] ==element)
        return i;
    }
    return -1;
}

node* solve(int in[],int pre[],int index,int inOrderStart,int inOrderEnd ,int n ){
    //base case
    if(index >=n || inOrderStart > inOrderEnd){
        NULL;
    }

    int element =pre[index++];
    node* root = new node(element);
    int position = findPosition(in,element,n);

    //recursive  call
    root->left = solve(in,pre,index,inOrderStart,position-1,n);
    root->right = solve(in,pre,index,position+1,inOrderEnd,n);

    return root;

}


node* buildTree(int in[], int pre[], int n ){
    int preOrderIndex = 0 ; 
    node* ans = solve(in,pre,preOrderIndex,0,n-1,n);
    return ans;

} 



int main(){

}