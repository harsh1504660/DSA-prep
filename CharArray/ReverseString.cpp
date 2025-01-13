#include <iostream>
using namespace std;

void ReverseString(char arr[],int n){
    int start=0;
    int end = n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
}
}


int main(){
    char arr[5];
    cin>>arr;
    ReverseString(arr,5);
    cout<<arr<<'\n';
    return 0;
}