#include<iostream>
using namespace std;


bool IsSorted(int arr[], int size){
    if (size==0 || size==1)
    {
        return true;
    }
    if (arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = IsSorted(arr+1,size-1);
        return ans;
    }
}

int main(){
    int size = 5;
    int arr[5] = {1,2,3,4,1};
    int res = IsSorted(arr,size);
    cout<<res;
    return 0;
}