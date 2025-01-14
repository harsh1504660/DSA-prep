#include<iostream>
#include <cstring>
using namespace std;

char toLowerCase(char ch){
    if(ch >='a' && ch<='z'){
        return ch ;
    }
    else {
        char temp = ch -'A'+'a';
        return temp;
    }
}


bool CheckPalindrome(string arr){
    int n  = arr.size();
    int start=0;
    int end = n-1;
    while(start<=end){
        if (toLowerCase(arr[start])!= toLowerCase(arr[end])){
            return true;
        }
        else {
        start++;
        end--;
        }
}
return false;
}

int main(){
    string arr;
    cin>>arr;
    cout<<'\n';
    cout<<CheckPalindrome(arr);
    return 0;
}