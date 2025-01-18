#include<iostream>
using namespace std;
#include<vector>

vector<int> PrintWave(vector<vector<int>> arr, int row, int col) {
    vector<int> res;

    for (int i = 0; i < col; i++) { // Iterate over columns
        if (i & 1) {
            // Traverse top to bottom for even-indexed columns
            for (int j = 0; j < row; j++) {
                res.push_back(arr[j][i]);
            }
        } else {
            // Traverse bottom to top for odd-indexed columns
            for (int j = row - 1; j >= 0; j--) {
                res.push_back(arr[j][i]);
            }
        }
    }
    return res;
}

int main() {
    int row = 2, col = 3; // Define rows and columns
    vector<vector<int>> arr(row, vector<int>(col)); // Initialize 2D vector

    // Input the 2D array
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    // Call the PrintWave function
    vector<int> wave = PrintWave(arr, row, col);

    // Output the wave pattern
    cout << "Wave pattern:" << endl;
    for (int val : wave) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}