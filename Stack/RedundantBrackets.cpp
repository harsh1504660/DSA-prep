#include <iostream>
using namespace std;
#include <stack>

bool RedundantBrackets(string &s){
    stack <int> st;
    for(int i = 0 ; i<s.length();i++){
        char ch = s[i];

        if(ch=='(' || ch=='+' || ch=='-' || ch== '*' || ch=='/'){
            st.push(ch);
        }
        else{
            // ch ya toh ')' hai or lowercase letters

            if(ch ==')'){
                bool isRedundant = true;
                while(st.top()!= '('){
                    char top = st.top();
                    if( ch=='+' || ch=='-' || ch== '*' || ch=='/'){
                      isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant ==true){
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}


int main()
{
    
    return 0;
}