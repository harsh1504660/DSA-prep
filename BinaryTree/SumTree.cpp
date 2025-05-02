#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->right =NULL;
        this->left ==NULL;
    }
};

pair<bool,int> isSumTree(node* root){
    //base case
    if(root==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p ;
    }

    if(root->left==NULL && root->right==NULL){   // dont check for the leaves
        pair<bool,int> p = make_pair(true,root->data);
        return p ;
    }

    pair<bool,int> leftAns = isSumTree(root->left);
    pair<bool,int> rightAns = isSumTree(root->right);

    // check right and left trees are sum trees or not 
    bool left = leftAns.first;
    bool right = rightAns.first;

    bool condn = root->data == leftAns.second +rightAns.second;

    pair<bool,int> ans ;
    

    if(left && right && condn){
        ans.first = true;
        ans.second = 2*root->data;
        return ans;
    }
    else{
        ans.first = false;
        return ans;
    }
}
int main()
{
    
    return 0;
}