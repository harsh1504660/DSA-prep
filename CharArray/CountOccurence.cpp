#include <iostream>
using namespace std;

char CountOccurence(string s){
    int maxii=0;
    char re;
    for (int i=0;i<s.length();i++){
        int count=0;
        for (int j=0;j<s.length();j++){
            if (s[i]==s[j]){
                count++;
            }
        }
        
        if (maxii>=count){
            re = s[i];
            
        }
        maxii=count;
        
    }
    return re;
}



int main(){
    string s = "aaaabbbbbbbbbbccc";
    char re = CountOccurence(s);
    cout<<re<<'\n';
    return 0;
}