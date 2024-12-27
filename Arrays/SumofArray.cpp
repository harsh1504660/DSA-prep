#include <iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[100];
    int sum=0;
    cout<<"enter array element"<<endl;
    for (int i=0;i<size;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<sum<<endl;

}