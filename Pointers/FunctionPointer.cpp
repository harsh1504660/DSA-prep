#include<iostream>
using namespace std;

void Print(int *p){
    cout<<*p<<endl;
}

void Update(int *p){
    //p = p +1;
    cout<<"Inside "<<p<<endl;
    *p = *p+1;
    cout<<"value of p Inside "<<*p<<endl;
}
int main(){
    int value = 5;
    int *p = &value;

    Print(p);
    cout<<"==================="<<endl;
    cout<<"before "<<p<<endl;
    Update(p);
    cout<<"After "<<p<<endl;
    cout<<"value of p Outside"<<*p<<endl;
    return 0;
}