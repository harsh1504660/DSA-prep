#include <iostream>
#include<queue>
using namespace std;

int main()
{
    

    cout<<"using priorit queue here"<<endl;

    //max heap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(3);
    pq.push(5);

    cout<<"element at top "<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top after popping "<<pq.top()<<endl;

    cout<<"size :  "<<pq.size()<<endl;

    cout<<"is empty? : "<<pq.empty()<<endl;

    cout<<"min heap : "<<endl;
    cout<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int>> minheap;

      minheap.push(4);
    minheap.push(3);
    minheap.push(5);

    cout<<"element at top "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element at top after popping "<<pq.top()<<endl;

    cout<<"size :  "<<minheap.size()<<endl;

    cout<<"is empty? : "<<minheap.empty()<<endl;
    return 0;
}