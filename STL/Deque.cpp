#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(2);
    d.push_front(1);

    d.pop_back();
    d.pop_front();
    return 0;
}