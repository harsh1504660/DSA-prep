#include <iostream>
using namespace std;


bool BinarySearch(int *arr, int s ,int e , int target){
    if (s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if (arr[mid]==target){
        return true;
    }
    if (arr[mid] < target){
        return BinarySearch(arr,mid+1,e,target);
    }
    else{
        return BinarySearch(arr,s,mid-1,target);
    }
}
int main()
{
    int arr[6] = {1,2,5,41,55,80};
    int res = BinarySearch(arr,0,5,555);
    cout<<res;
    return 0;
}