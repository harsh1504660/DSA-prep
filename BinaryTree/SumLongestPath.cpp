#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};


void solve(node* root,int len,int &maxLen,int sum,int &maxSum){
    //base case
    if(root ==NULL){
        if(len > maxLen){
            maxLen = len;
            maxSum = sum;
        }
        else if(len==maxLen){
            maxSum = max(sum,maxSum);
        }
        return ;
    }

    sum = sum+root->data;
    solve(root->left,len+1,maxLen,sum,maxSum);
    solve(root->right,len+1,maxLen,sum,maxSum);
}

int SumLongestPath(node* root){
    int len =  0 ;
    int maxLen = 0 ; 
    int sum = 0;
    int maxSum =INT32_MIN;

    solve(root,len,maxLen,sum,maxSum);

    return maxSum;
}

int main()
{
    
    return 0;
}