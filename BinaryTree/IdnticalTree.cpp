#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->right = NULL;
        this->left =NULL;
    }
};
bool Identical(node* r1,node* r2)
{
    //base case
    if(r1 ==NULL && r2==NULL){
        return true;
    }
    if (r1 ==NULL && r2 !=NULL){
        return false;
    }
    if (r2 ==NULL && r1 !=NULL){
        return false;
    }

    bool left = Identical(r1->left,r2->left);
    bool right = Identical(r1->right,r2->right);

    bool curr = r1->data ==r2->data;

    if(left && right && curr){
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    
    return 0;
}