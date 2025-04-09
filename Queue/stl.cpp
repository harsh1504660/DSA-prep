#include <iostream>
#include<queue>
using namespace std;

int main()
{
    //create a queue
    queue<int> q ; 
    q.push(11);
    cout<<"front of queue is : "<<q.front()<<endl;
    q.push(12);

    q.push (15);

    cout<<"size of q is : "<<q.size()<<endl;

    q.pop();
    cout<<"size of q is : "<<q.size()<<endl;
    cout<<"queue is empty or not"<<q.empty()<<endl;
    return 0;
}