// 0,1,1,2,3,5,8
#include<iostream>
using namespace std;

int Fibonacci(int n){

    if (n==0 ){
        return 0;

    }
        if (n==1 ){
        return 1;

    }

        int next = Fibonacci(n-1)+Fibonacci(n-2);
        return next; 
}

int main(){
    Fibonacci(5);
    return 0;
}