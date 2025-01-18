#include<iostream>
using namespace std;




int main(){

    int num = 5;
    cout<<num<<endl; 
    
    cout<<"Address on num is :"<<&num<<endl;

    int *ptr = &num;
    cout<<"Value of num is :"<<*ptr<<'\n';
    cout<<"Address of num is :"<<ptr<<'\n';

    double d = 4.3;
    double *p = &d;
    cout<<"Value of num is :"<<*p<<'\n';
    cout<<"Address of num is :"<<p<<endl;;

    cout<<"size of int is : "<<sizeof(num)<<endl;
    cout<<"size of int Pointer is : "<<sizeof(ptr)<<endl;

    cout<<"size of double is : "<<sizeof(d)<<endl;
    cout<<"size of double Pointer is : "<<sizeof(p)<<endl;
    return 0;
}