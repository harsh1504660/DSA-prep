#include<iostream>
using namespace std;

int main(){

    // badpracice 
    //int *p;

    //cout<<p<<endl;

    int i = 5;
    // int *p = 0;
    // p=&i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num = 5 ;
    int *p = &num;
    cout<<*p<<endl;
    (*p)++;
    cout<<*p<<endl;

    //copying one pointer into another
    int *q =p ;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;

    //pointer arithmatic
    int j = 5;
    int *t = &j;
    (*t)++;
    cout<<j<<endl;

    //increamenting t  ----. +4 for int  / for double +8
    cout<<"Before inreamenting "<<t<<endl;
    t++;
    cout<<"After increamenting "<<t<<endl;
    return 0;
}