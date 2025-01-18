#include<iostream>
#include<vector>
using namespace std;

bool BinarySearch(vector<vector<int>> arr,int target)
{
    int row = arr.size();
    int col = arr[0].size();
    int start =0;
    int end = (row*col) - 1;
    int mid = start + (end-start)/2;

    while (start<=end){
        int element = arr[mid/col][mid%col];
        if (element==target){
            return 1;
        }
        else if (element > target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return false;
    }

int main(){
    int row = 2, col = 3; // Define rows and columns
    vector<vector<int>> arr(row, vector<int>(col));
    for (int i=0;i<row;i++){
    for (int j=0;j<col;j++){
        cin>>arr[i][j];
        }
    }

    int res = BinarySearch(arr,5);
    cout<<res;

    return 0;
}