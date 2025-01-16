#include<iostream>
#include<vector>
using namespace std;

void MoveZeros(int arr[],int n){
    int i = 0;
    int j = i+1;
    while (i<n){
        if (arr[i]==0){
            continue;
        }
        else{
            swap(arr[i],arr[i+1]);
        }
    }
}

void print(int arr[],int n){

}

int main(){


    return 0;
}