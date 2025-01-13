#include <iostream>
using namespace std;

int main(){
    char name[20];
    //cin stops its executoin on tab,space,\n
    cout<<"enter your name\n";
    cin>>name;
    name[2] = '\0';
    cout<<"name is : "<<name<<"\n";
    return 0;

}