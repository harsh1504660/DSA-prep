#include <iostream>
using namespace std;


string RemoveAdDupli(string s){
    int i=0;
    while(i<s.length()){
        if (s[i]==s[i+1]){
            cout<<s<<'\n';
            s.erase(i,2);
            i=0;
        }
        else{i++;}
        
    }
    return s;
}

int main(){
    string s = "aabaabAsd";

    cout<<s<<'\n';
    string as = RemoveAdDupli(s);
    cout<<as;
    return 0;
}