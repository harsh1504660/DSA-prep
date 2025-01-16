#include <iostream>
using namespace std;
#include<map>


//aabcc
//0                                            // i -> 1,2,3,4,5                j ->0,1,2,3,4
//a2bc2
string StringCompression(string s){
    string temp = "";
    int tempcount = 1; 

    for (int i = 1; i <= s.length(); i++) {
    
        if (i < s.length() && s[i] == s[i - 1]) {
            tempcount++;
        } 
        else {
            
            temp.push_back(s[i - 1]);
        
            if (tempcount > 1) {
                temp += to_string(tempcount);
            }
            // Reset the count for the next character
            tempcount = 1;
        }
    }

    return temp;

}

// string StringCompression(string s){

//     map<char,int> m;
//     int count = 0;
//     for (int i=1;i<s.length();i++){
       
//         if(s[i-1]==s[i]){
            
//             count++;
//         }
//     }
// }


int main(){
    string s = "aabcc";
    string temp = StringCompression(s);
    cout<<temp;
    return 0;
}

// a3b2c

