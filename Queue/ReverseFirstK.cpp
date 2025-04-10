#include <iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> revk(queue<int> q, int k) {
    stack<int> s;

    //if (k > q.size() || k < 0) return q;

    for (int i = 0; i < k; i++) {
        int element = q.front();
        q.pop();
        s.push(element);
        cout << "first\n";
    }

    while (!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
        cout << "second\n";
    }

    int t = q.size() - k;
    while (t--) {
        int val = q.front();
        q.pop();
        q.push(val);
        cout << "third\n";
    }

    return q; 
}


int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue<int>res = revk(q,3);
    while(!res.empty()){
        cout<<res.front()<<endl;
        res.pop();
    }
    return 0;
}