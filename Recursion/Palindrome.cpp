#include <iostream>
using namespace std;

bool Palindrome(string arr1 ,int i,int j){
    if (i>j){
        return 1;
    }
    if (arr1[i]!=arr1[j]){
        return 0;
    }
    else{
    i++;j--;
    return Palindrome(arr1,i,j);
}}

int main()
{   
    string a = "harah";
    int res  = Palindrome(a,0,a.length()-1);
    cout<<res;
    return 0;
}