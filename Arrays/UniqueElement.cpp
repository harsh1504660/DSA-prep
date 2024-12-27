#include <iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans=0;
    for (int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {1,1,2,2,5};
    int ele = findUnique(arr,5);
    cout<<ele<<endl;
    return 0;
}