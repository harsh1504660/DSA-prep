#include <iostream>
#include<string>
using namespace std;


string RemoveSubstring(string s,string part){
    string res; 
    int lenn = part.length();
    for (int i = 0; i < s.length(); ) { // Use a while loop for controlled increment
        if (s.substr(i, lenn) == part) {
            i += lenn; // Skip over the matched substring
            
        } else {
            res.push_back(s[i]); // Add the current character to the result
            i++; // Move to the next character
        }
    }
    return res;
}

int main(){
    string ch= "daabcbaabcbc";
    string res = RemoveSubstring(ch,"abc");
    cout<<res;
    return 0;
}
