#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    // int mid = (end+start)/2;
    int mid = start +(end-start)/2; // more optimized way
    while(start <= end){
        
        if (arr[mid]==key){
            return mid;
        }
        if (key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return -1;
}


int main(){
    int even[6] = {2,4,6,8,10,12};
    int oodd[5] = {1,3,5,7,9};

    int ele = BinarySearch(even,6,10);
    cout<<ele;
    return 0;
}