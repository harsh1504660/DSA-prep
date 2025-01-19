#include <iostream>
using namespace std;



int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,9};
    cout<<"Address of first memory block is : "<<arr<<endl;
    cout<<"Address of first memory block is : "<<&arr[0]<<endl;

    cout<<"Value of first element is : "<<*arr<<endl;
    cout<<"Value of scond element is : "<<*arr+1<<endl;

    cout<<"1st "<<arr[2]<<endl;
    cout<<"2nd "<<*arr +2<<endl;


    int i=3;
    cout<<i[arr]<<endl; // will run as excpected



    //size of array
    int temp[10];
    cout<<"Size of array " <<sizeof(temp)<<endl; // 40 = 10 x 4

    //size of one element
    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(&temp)<<endl;
    cout<<"============================================="<<endl;

    int a[20] = {1,2,3,45};
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<"============================================="<<endl;
    int *p = &a[0];
    cout<<p<<endl; // address
    cout<<*p<<endl; // value
    cout<<&p<<endl; //new addre
    return 0 ; 

}

