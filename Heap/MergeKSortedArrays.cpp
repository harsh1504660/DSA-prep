#include <bits/stdc++.h> 
#include<vector>

#include <iostream>
using namespace std;

int main()
{
    
    return 0;
}
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    vector<int> ans;
    for(int i=0;i<k;i++){
        for (int j=0;j<kArrays[i].size();j++){
            ans.push_back(kArrays[i][j]);
        }
    }

   sort(ans.begin(),ans.end());
   return ans;
   
}