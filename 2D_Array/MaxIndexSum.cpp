#include<iostream>
using namespace std;

void largestRowSum(int arr[][3],int row,int col){
    int maxii = INT32_MIN;
    int rowIndex = -1;
    for (int col=0;col<3;col++){
    int sum= 0;
    
    for (int row=0;row<3;row++){
        sum += arr[row][col];
    }
    if (sum > maxii){
        maxii = sum;
        rowIndex = row;
    }
    }
    cout<<"Maxium sum is :"<<maxii<<'\n';
    cout<<"The index is : "<<rowIndex<<'\n';
}




int main(){
    int arr[2][3];
    for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
        cin>>arr[i][j];
        }
    }
    for (int i=0;i<2;i++){
    for (int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }

    largestRowSum(arr,2,3);

    return 0;
}