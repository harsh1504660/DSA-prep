#include <iostream>
using namespace std;
#include <vector>
void DiagonalSum(vector<vector<int>> arr)
{
   int row = arr.size();
    if (row == 0) return; // Handle empty matrix

    int col = arr[0].size();
    if (row != col) {
        cout << "Matrix is not square, diagonal sum cannot be calculated." << endl;
        return;
    }

    int sum = 0;

    for (int i = 0; i < row; i++) {
        // Add primary diagonal element
        sum += arr[i][i];

        // Add secondary diagonal element, avoid double-counting the center element in odd-sized matrices
        if (i != row - i - 1) {
            sum += arr[i][row - i - 1];
        }
    }

    cout << "Sum of diagonals: " << sum << endl;
}

int main()
{
    int row = 4, col = 4;                           // Define rows and columns
    vector<vector<int>> arr(row, vector<int>(col)); // nitialize 2D vector
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;

        for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    DiagonalSum(arr);

    return 0;
}