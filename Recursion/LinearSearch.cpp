#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int size, int target) {
    if (size == 0) {
        return false; // Base case: target not found
    }
    if (arr[0] == target) {
        return true; // Target found
    }
    return LinearSearch(arr + 1, size - 1, target); // Recursive call
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int res = LinearSearch(arr,5,54);
    cout<<res;
    return 0;
}