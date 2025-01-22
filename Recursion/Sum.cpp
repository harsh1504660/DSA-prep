#include<iostream>
using namespace std;

int sum(int arr[],int size){
    if (size==0){
        return 0;
    }
    if (size == 1){
        return arr[0];
    }
    else{
        int res = arr[0] +sum(arr+1,size-1);
        return res;
    }
}

int main(){
    int arr[0];
    int res = sum(arr,0);
    cout<<res;
    return 0;
}