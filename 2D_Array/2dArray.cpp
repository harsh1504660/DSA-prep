#include<iostream>
using namespace std;



// need to specify the col value at least 
bool IsFound(int arr[][4], int target, int n,int m){
        for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (arr[i][j]==target){
                return true;
            }
        }
        
       
    }
    return false;
}


int main(){
    //rows , column format 
    int arr[2][4];
    int arr1[2][3] = {1,2,3,4,5,6,};
    int arr2[2][3] = {{10,20,30},{40,50,60}};


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

    cout<<IsFound(arr,5,2,3);
    return 0;
}