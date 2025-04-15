#include <iostream>
#include <queue>
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

node *buildTree(node *root)
{
    cout << "enter the data" << endl;

    int data;
    cin >> data;

    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "enter data for inserting in left" << endl;
    root->left = buildTree(root->left);

    cout << "enter data for inserting in right" << endl;
    root->right = buildTree(root->right);

    return root;
}

node *levelOrderTranversal(node *root)
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

void inorder(node* root){ // same logic for preorder and postorder
    //base case
    if(root==NULL){
        return ;
    }
    inorder(root->left);    //l
    cout<<root->data<<" ";  //n
    inorder(root->right);   //r

    cout<<"inorder traversal is : ";
    inorder(root); 
}
int main()
{
    node *root = NULL;

    // creating a tree
    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    // level order
    cout << "printing the level order traberasl" << endl;
    levelOrderTranversal(root);
    return 0;
}