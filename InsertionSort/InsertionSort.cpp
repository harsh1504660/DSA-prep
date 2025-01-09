#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i]; // Declare and initialize temp
        int j = i - 1; // Correct initialization of j
        for (; j >= 0; j--) { // Correct loop condition
            if (arr[j] > temp) { // Compare current element with temp
                arr[j + 1] = arr[j]; // Shift element to the right
            } else {
                break; 
            }
        }
        arr[j + 1] = temp; 
    }
}


void DisplayArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int arr[6] = {9,4,2,8,6,62};
    InsertionSort(arr,6);
    DisplayArray(arr,6);

    return 0;
}