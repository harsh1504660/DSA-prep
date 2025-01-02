#include <iostream>
#include <vector>
using namespace std;

int FindPivotIndex(vector<int>& arr) {
    int total_sum = 0;
    for (int num : arr) {
        total_sum += num;
    }

    int left_sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        // Check if left_sum equals the right sum
        if (left_sum == total_sum - left_sum - arr[i]) {
            return i; // Pivot index found
        }
        left_sum += arr[i]; // Update left_sum for the next index
    }

    return -1; // No pivot index found
}

int main() {
    vector<int> arr = {-1, -1, -1, -1, 0, 1};
    int ind = FindPivotIndex(arr);
    cout << "Pivot Index: " << ind << endl;
    return 0;
}
