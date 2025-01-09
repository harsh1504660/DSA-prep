#include<iostream>
#include <cstdlib>
using namespace std;
void PrintArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void RotateArray(int arr[], int n, int k) {
    int c = 1; // Counter for rotations
    while (c <= k) {
        // Perform one right rotation
        int last = arr[n - 1]; // Save the last element
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1]; // Shift elements to the right
        }
        arr[0] = last; // Place the saved element at the start

        // Debugging output
        cout << "After rotation " << c << ": ";
        PrintArray(arr, n);

        c++; // Increment rotation counter
    }
}



int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    RotateArray(arr,7,3);
    cout<<"printin\n";
    PrintArray(arr,7);
    return 0;
}