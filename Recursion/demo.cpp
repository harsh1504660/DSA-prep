#include<iostream>
using namespace std;


int Factorial(int n){
    //base case 
    if (n==0){
        return 1;
    }
    int badii = n*Factorial(n-1);

    return badii;
}

int main(){

    int n;
    cin>>n;

    int ans = Factorial(n);
    cout<<ans;
    return 0;
}