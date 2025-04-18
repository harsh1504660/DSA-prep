#include <iostream>
using namespace std;
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
int height(node* root){

    //base case
    if(root==NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right) +1;

    return ans;
}
pair<int,int> diemterFast(node* root){

    //base case 
    if(root==NULL){
        pair<int,int> p = make_pair(0,0);
        return p ;
    }
    pair<int,int> left = diemterFast(root->left);
    pair<int,int> right = diemterFast(root->right); 

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second +right.second +1;

    pair<int,int> ans ;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second) +1;

    return ans;
}

int diemter(node* root){
    return diemterFast(root).first;
}

int main()
{
        
    return 0;
}

