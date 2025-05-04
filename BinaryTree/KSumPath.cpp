#include <iostream>
#include<vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right ;
    node(int d){
        this->data = d;
        this->left = NULL;
        this-> right = NULL;
    }
};

void solve(node* root,int k , int &count, vector<int> path)
{
    //base case
    if(root==NULL){
        return ;
    }

    path.push_back(root->data);

    //left call
    solve(root->left,k , count,path);
    
    //right call
    solve(root->right,k,count,path);

    //check for k sum 
    int size = path.size();
    int sum = 0 ; 
    for (int i=size-1;i>=0;i--){
        sum += path[i];
        if(sum ==k){
            count ++;
        }
    }
    path.pop_back();
}

int sumofK(node* root , int k ){
    vector<int> path;
    int count =0 ;

    solve(root,k,count,path);
    return count;
}


int main()
{
    
    return 0;
}