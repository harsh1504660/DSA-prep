#include <iostream>
using namespace std;
#include <string>

string ReverseWord(string word){
    int start=0;
    int end = word.length()-1;
    while(start<end){
    swap(word[start],word[end]);
    start++;
    end--;
    return word;
}
}

int main(){
    string word,temp,result,final;
    getline(cin, word);
    // for (int i=0;i<word.length();i++){
    //     if (word[i]=='\0'){
    //     cout<<word[i]<<"null found";}
    // }
    for (int i=0;i<word.length()-1;i++){
        if (word[i]==' ' || word[i]=='\0'){
            result = ReverseWord(temp);
            final = final+result;
            cout<<final<<'\n';
        }
        else{
            temp.push_back(word[i]);
        }
    }
    cout<<final;
    return 0;
}