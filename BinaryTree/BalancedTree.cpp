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

int height(node* root){
    //base case
    if(root == NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right)+1;

    return ans;
}

bool isBalancedTree(node* root){
    //base case
    if (root==NULL){
        return true;
    }

    bool left = isBalancedTree(root->left);
    bool right = isBalancedTree(root->right);

    bool diff = abs(height(root->left) - height(root->right)) <=1 ;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    
    return 0;
}