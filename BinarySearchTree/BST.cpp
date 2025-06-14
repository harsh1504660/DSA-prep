#include <iostream>
#include<queue>
using namespace std;

class node{
    public : 
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d ;
        this->left = NULL;
        this->right = NULL;
    }
};

node* insertintoBST(node* root,int data){
    //base case
    if(root ==NULL){
        root = new node(data);
        return root;
    }

    if(data > root->data){
        //right part me insert
        root->right = insertintoBST(root->right,data);
    }
    else{
        //left part me insert 
        root->left = insertintoBST(root->left,data);
    }
    return root ; 
}

void takeinput(node* &root){
    int data;
    cin>>data;

    while(data !=-1){
        root = insertintoBST(root,data);
        cin>>data;
    }
}


// for print purpose 
void levelOrderTranversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // seperator

    while (!q.empty())
    {
        node *temp = q.front();
        
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node* root = NULL;

    cout<<"enter data to creat a bst";
    takeinput(root);

    cout<<"printing the bst"<<endl;
    levelOrderTranversal(root);
    return 0;
}