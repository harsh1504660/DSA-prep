#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("khalsa");

    cout<<"top element"<<q.front()<<endl;
    q.pop();
    cout<<"top element"<<q.front()<<endl;
    return 0;

}