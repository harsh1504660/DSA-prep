#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left =NULL;
        this->right = NULL;
}
};

pair<bool,int> BalancedFast(node* root){
    //base case
    if(root ==NULL){
        pair<bool,int> p = make_pair(true,0);
        return p;
    }

    pair<bool,int> left = BalancedFast(root->left);
    pair<bool,int> right = BalancedFast(root->right);

    bool leftAns = left.first;
    bool rightAns = right.first;

    bool diff = abs(left.second - right.second) <=1;

    pair<bool,int> ans;
    ans.second = max(left.second,right.second) +1;
    if(leftAns && rightAns && diff){
        ans.first = true;
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