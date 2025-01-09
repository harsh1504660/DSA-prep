#include<iostream>
using namespace std;

void DisplayArray(int arr[],int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void ReversedArray(int arr[],int n,int m){
    for(int i=m+1,j=n-1;i<j;i++,j--){
        swap(arr[i],arr[j]);
    }
}

int main(){

    int arr[5] = {1,5,7,9,6};
    ReversedArray(arr,5,1);
    DisplayArray(arr,5);
    return 0;
}
