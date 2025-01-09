#include <iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("love");
    s.push("babbar");
    s.push("kummm");

    cout<<"top element : "<<s.top()<<endl;
    s.pop();
    cout<<"top element : "<<s.top()<<endl;
    return 0;
}