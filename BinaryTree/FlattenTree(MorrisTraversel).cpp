#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d){
        this->data =d;
        this->right = NULL;
        this->left = NULL;
    }

};

void flatten(node* root){
    node* curr = root;
    while(curr!=NULL){
        if(curr->left){
            node* pred = curr->left;
            while(pred->right){
                pred = pred->right;
            }
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }

}
int main()
{
    
    return 0;
}