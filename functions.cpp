#include <iostream>
using namespace std;


int power (int a ,int b){
    int ans=1;
    for (int i=1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
}

int factorial(int n){
    int fact=1;
    if (fact==0){
        return 1;
    }
    for (int i=n;i>0;i--){
        fact = fact*i;
    }
    return fact;
}

int ncr (int n,int r){
    int numer = 1;
    int denom= 0;

    numer = factorial(n);
    int diff = n-r;
    denom = factorial(r) * factorial(diff);
    int ans = numer/denom;
    return ans;
}
int main(){

    int a =12;
    int b = 0;
    int result = power(a,b);
    cout<<result;

    int res = ncr(a,b);
    cout<<"ncr of a and b is "<<res;
    return 0;
}