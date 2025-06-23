#include <iostream>
#include<vector>
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

void StoreInorder(node* root,vector<int> &in){
    if(root==NULL){
        return;
    }

    StoreInorder(root->left,in);
    in.push_back(root->data);
    StoreInorder(root->right,in);

}

vector<int> mergeArray(vector<int>a,vector<int>b){
    vector<int> ans(a.size()+b.size());
    int i = 0 ,j=0;
    int  k= 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans[k++] = a[i];
            i++;
            
        }
        else{
            ans[k++] = b[j];
            j++;
            
        }
    }

    while(i<a.size()){
        ans[k++] = a[i];
        i++;
    }
        while(j<b.size()){
        ans[k++] = a[j];
        j++;
    }
    return ans;
}
node* inroderToBST(int s,int e,vector<int> inorderVal){
    //base case
    if(s>e){
        return NULL;

    }


    int mid = (s+e)/2;

    node* root = new node(inorderVal[mid]);
    root->left = inroderToBST(s,mid-1,inorderVal);
    root->right = inroderToBST(mid+1,e,inorderVal);
    return root;
}
node* MergeBST(node* root1 , node* root2){
    //step 1 : store inorder of both trees
    vector<int> bst1,bst2;
    StoreInorder(root1,bst1);
    StoreInorder(root2,bst2);

    vector<int> mergedArray = mergeArray(bst1,bst2);
    int s=0,e = mergedArray.size()-1;
    return inroderToBST(s,e,mergedArray);
}


int main()
{

    return 0;
}