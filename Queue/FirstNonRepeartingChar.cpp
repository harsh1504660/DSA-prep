#include <iostream>
#include<map>
#include<queue>
using namespace std;

string sol(string a){
    map<char,int> count;
    queue<int>q;

    string ans="";
    // aabc           q : a   ans: a
    for (int i=0;i<a.length();i++){
        char ch = a[i];

        //increase count the 
        count[ch]++;

        //push in the queue
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()]>1){
                //repearing 
                q.pop();
            }
            else{
                //non repeatong
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}

int main()
{
    
    return 0;
}