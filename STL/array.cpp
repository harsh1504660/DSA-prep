#include <iostream>
#include <array>
using namespace std;

int main(){
    int basic[4] = {1,2,3,4};

    array<int,4> a = {1,2,3,4};
    int size = a.size();
    for (int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    cout<<"Is array empty"<<a.empty()<<endl;
    cout<<"First element : "<<a.front()<<endl;
    cout<<"Last Element : "<<a.back()<<endl;
    return 0;
}