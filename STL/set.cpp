#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(4);
        s.insert(4);   // 4 will only get isnerted once 
    s.insert(3);
    s.insert(2);
    s.insert(1);

    for (auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"the element 8 is avaiable or not : "<<s.count(8);
    return 0;
}