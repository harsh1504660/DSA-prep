#include<iostream>
using namespace std;

// print 
void printSum(int arr[][4],int row,int col){
    for (int col=0;col<3;col++){
    int sum= 0;
    for (int row=0;row<2;row++){
        sum += arr[row][col];
    }
    cout<<sum<<" ";
    }
}


int main(){

    int arr[2][4];

    // inputing array
    for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        cin>>arr[i][j];
        }
    }

    // printing array
    for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    printSum(arr,2,4);
    return 0;
}