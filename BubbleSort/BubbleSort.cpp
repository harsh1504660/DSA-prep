#include <iostream>
using namespace std;


void DisplayArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void BubbleSort(int arr[],int n){
    for (int k=0;k<n-1;k++){
    for (int i=0;i<n-k;i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    }
}

void OptimizedBubbleSort(int arr[],int n){
    for (int k=0;k<n-1;k++){
        bool swapped = false;
    for (int i=0;i<n-k;i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            swapped = true;
        }
    }
    if (swapped ==false){
        break;
    }
    }
}

int main(){
    int arr[5] = {8,1,9,2,6};
    OptimizedBubbleSort(arr,5);
    DisplayArray(arr,5);

    return 0;
}