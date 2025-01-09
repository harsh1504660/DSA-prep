#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(11);
    v.push_back(2);

    //binary_search
    cout<<binary_search(v.begin(),v.end(),5);


    // same for min , you know the swap
    int a=5 , b=10;
    cout<<"miximum is : "<<max(a,b);


    //reversed the string 
    string s = "abcd";
    reverse(s.begin(),s.end());
    cout<<"string is : "<<s;

    //rotate the vector

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"rotated vector is : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
        for(int i:v){
        cout<<i<<" ";
    }
        return 0;
}