#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;
    int a[2] = {1,2};
    l.push_back(1);
    l.push_front(2);

    for (int i:l){
        cout<<i<<" ";
    }
    for (int j:a){
        cout<<j<<" ";
    }
    return 0
;}