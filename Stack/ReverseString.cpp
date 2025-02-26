#include <iostream>
#include<stack>
using namespace std;


int main()
{
    stack<int> st;
    string s = "love";
    for(int i =0;i<s.length();i++){
        char ch = s[i];
        st.push(ch);
    }

    string ans = "";
    while(!st.empty()){
        char ch = st.top();

        ans.push_back(ch);

        st.pop();
    }

    cout<<ans<<endl;
    return 0;
}