#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> MergedArray(vector<int>& nums1,int n,vector<int>nums2,int m){
    
    vector<int> result;
    cout<<"result intitaed\n";
    for (int i=0;i<n;i++){
        result.push_back(nums1[i]);
        cout<<"in first loop\n";
    }
    for (int i=0;i<n;i++){
        result.push_back(nums2[i]);
    }
    cout<<"first function";
    return result;


}
void Print(vector<int>result){

    sort(result.begin(),result.end());
    for (int i:result){
        cout<<i<<" ";
    }
}
int main(){
    vector<int> nums1;
    vector<int> nums2;
    cout<<"setting value\n";
    nums1.push_back(5);
    nums1.push_back(4);
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(54);
    cout<<"setting values2\n";
    nums2.push_back(3);
    nums2.push_back(59);
    nums2.push_back(1);
    nums2.push_back(15);
    nums2.push_back(65);
    cout<<"calling first function\n";
    vector<int> result = MergedArray(nums1,3,nums2,3);
    cout<<"printingfunction \n";
    Print(result);
    return 0;
}