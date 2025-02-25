#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;

    s.push(3);
    s.push(10);

    s.pop();

    cout<<"top element : "<<s.top();

    if(s.empty()){
        cout<<"stack is empty";
    }
    return 0;
}