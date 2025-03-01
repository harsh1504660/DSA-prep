#include <iostream>
#include<stack>
#include<vector>
using namespace std;


bool knows(vector<vector<int>> &m,int a,int b ,int n ){
    if(m[a][b]==1){
        return true;
    }
    else{
        return false;
    }
}


int celebrity(vector<vector<int>> &m,int n){
    stack<int> s ;
    
    //push all element in stack
    for(int i = 0 ; i<n ; i++){
        s.push(i);
    }

    //step2 : get two elemnts and compare them
    while(s.size()>1){
        int a  =s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if(knows(m,a,b,n)){
            s.push(b);
        }
        else{
            s.push(a);
        }

    }
    int potentialCeleb = s.top();
    //step 3 : single element in stack is potenital celebirty
    // so verify it
    bool rowCheck =false;
    int zeroCount = 0 ;
    for(int i = 0 ; i<n;i++){
        if(m[potentialCeleb][i]==0){
            zeroCount++;
        }
    }
    // kya all zeros hai
    if(zeroCount==n){
        rowCheck = true;
    }

    //column check
    bool colCheck  = false;
    int oneCount = 0 ; 

    for(int i = 0 ; i<n;i++){
        if(m[i][potentialCeleb]==1){
            oneCount++;
        }
    }

    if(oneCount == n-1){
        colCheck = true;
    }

    if(rowCheck==true && colCheck==true){
        return potentialCeleb;
    }
    else{
        return -1;
    }

}

int main()
{
    
    return 0;
}