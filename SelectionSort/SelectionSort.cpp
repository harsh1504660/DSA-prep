#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int MinINndex = i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[MinINndex]){
                MinINndex = j;
            }
        }
        swap(arr[MinINndex],arr[i]);
    }
}
void DisplayArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[6] = {1,6,42,4,2,6};
    SelectionSort(arr,6);
    DisplayArray(arr , 6);
    return 0;
}