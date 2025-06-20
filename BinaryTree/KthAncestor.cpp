#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* solve(Node* root,int &k,int node){
    //base case
    if(root==NULL){
        return NULL;
    }

    if(root->data==node){
        return root ;
         
    }

    Node* leftAns = solve(root->left,k,node);
    Node* rightAns = solve(root->right,k,node);

    if(leftAns !=NULL && rightAns==NULL){
        k--;
        if(k <=0){
            k = INT16_MAX;   //root ko lock kiya hein 
            return root;
        }
        return leftAns;
    }

    if(leftAns ==NULL && rightAns != NULL){
        k--;
        if(k <=0){
            k = INT16_MAX;   //root ko lock kiya hein 
            return root;
        }
        return rightAns;
    }
    return NULL ;
    //go wapis from left and right call 

}

int kthAncestor(Node* root, int  k, int node){
    Node* ans = solve(root,k,node);
    if(ans==NULL || ans->data ==node){
        return -1;
    }
    else{
        return ans->data;
    }
}

int main()
{
       
    return 0;
}