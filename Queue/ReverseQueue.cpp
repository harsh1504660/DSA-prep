#include <iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> rev(queue<int> q){
    stack<int> s;

    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int ele = s.top();
        s.pop();
        q.push(ele);
    }

    return q;
}


int main()
{
    
    return 0;
}