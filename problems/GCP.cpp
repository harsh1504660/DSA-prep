#include<iostream>
using namespace std;


int FindGCP(int n1,int n2){
    int maxrange = min(n1,n2);
    int count = 0 ;
    for (int i = 1; i<=maxrange;i++){
        if (i>=count){
        if (n1%i==0 && n2%i==0){
            count = i;
        }}
    
    }
    return count;
}

int main(){
    int res = FindGCP(10,30);

    cout<<res;
    return 0;
}