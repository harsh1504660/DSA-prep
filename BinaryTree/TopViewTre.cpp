#include <iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

class node{
    public :
    int data;
    node* left;
    node* right;

    node(int d ){
        this ->data = d;
        this -> left = NULL;
        this -> right =NULL;
    }


};

vector<int> topView(node* root){
    vector<int> ans;
    //base case
    if(root = NULL){
        return ans;
    }

    map<int,int> topNode;
    queue<pair<node*, int>> q ; 

    q.push(make_pair(root , 0 ));

    while(!q.empty()){
        pair<node*, int> temp = q.front();
        q.pop();
        node* frontNode = temp.first;
        int hd = temp.second;

        //if one value is present for a hf , then do nothing
        //hd = horizontal distance 

        if(topNode.find(hd) == topNode.end()){
            topNode[hd] = frontNode -> data;
        }
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }

    for(auto i:topNode){
        ans.push_back(i.second);

    }
    return ans;
}

int main()
{
    
    return 0;
}