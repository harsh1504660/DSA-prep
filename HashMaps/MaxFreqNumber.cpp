#include <iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;

int maxFreq(vector<int> &arr,int n){
    unordered_map<int ,int> count ;

    int maxFreqq= 0;
    int maxAns = 0;

    for(int i= 0;i<arr.size();i++){
        count[arr[i]]++;
        maxFreqq = max(maxFreqq,count[arr[i]]);
    }

    int maxi = INT32_MIN;
    int ans=-1;

    for(auto i:count){
        if(i.second>maxi){
            maxi = i.second;
            ans = i.first;
        }
    }

    for(int i = 0 ; i<arr.size();i++){
        if(maxFreqq == count[arr[i]]){
            maxAns = arr[i];
            break;
            
        }
    }

    return maxAns;
}

int main()
{
    
    return 0;
}