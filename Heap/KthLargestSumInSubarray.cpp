#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int getKthLargest(vector<int> &arr,int k){
    vector<int> SumStore;
    int n = arr.size();

    for(int i=0;i<n;i++){
        int sum =0 ;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            SumStore.push_back(sum);
        }
    }

    sort(SumStore.begin(),SumStore.end());

    return SumStore[SumStore.size()-k];
}

int main()
{
    
    return 0;
}