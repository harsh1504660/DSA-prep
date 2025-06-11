#include <iostream>
#include<map>
#include<queue>
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


// create a mapping
//return target node
node* createParentMapping(node* root,int target,map<node*,node*> & nodeToparent){

    node* res = NULL;
    queue<node*> q;
    q.push(root);
    nodeToparent[root]=NULL;
    while(!q.empty()){
        node* front = q.front();
        q.pop();
        if(front->data ==target){
            res = front;
        }

        if(front->left){
            nodeToparent[front->left] = front;
            q.push(front->left);
        }
        if(front->right){
            nodeToparent[front->right] = front;
            q.push(front->right);
        }
    }

    return res;

}

int burnTree(node* root,map<node*,node*> & nodeToparent){

    map<node*,bool> visited;
    queue<node*> q ;

    q.push(root);
    visited[root] =true;
    int ans = 0 ;
    while(!q.empty()){

        bool flag = 0 ; 
        int size = q.size();
        for(int i=0;i<size;i++){
            //processing neighoubring node
            node* front = q.front();
            q.pop();

            //left
            if(front->left && !visited[front->left]){
                flag = 1 ; 
                q.push(front->left);
                visited[front->left]=true;
            }

            //right
            if(front->right && !visited[front->right]){
                flag = 1 ; 
                q.push(front->right);
                visited[front->right]=true;
            }

            //parent
            if(nodeToparent[front] && !visited[nodeToparent[front]]){
                flag = 1 ; 
                q.push(nodeToparent[front]);
                visited[nodeToparent[front]] =true;
            }
        }
        if(flag==1){
            ans++;
        }
        
    }
   return ans; 
}

int minTime(node* root,int target){
    map<node*,node*> nodeToParent;

    node* targetNode = createParentMapping(root,target,nodeToParent);
   
    int ans = burnTree(targetNode,nodeToParent);

    return ans;
}
int main()
{
    
    return 0;
}