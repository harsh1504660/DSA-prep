#include <iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void SwapAlternate(int arr[],int size){
    for (int i=0,j=1;i<size;i+=2,j+=2){
        if (j<size){
            swap(arr[i],arr[j]);
        }
        
    }
    PrintArray(arr,size);
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    SwapAlternate(arr,6);
    return 0;
}