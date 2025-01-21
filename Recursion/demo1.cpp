#include<iostream>
using namespace std;


void Count(int n){
    if (n==0){
        return ;
    }
    cout<<n<<endl;
    Count(n-1);

  
}

int main(){

    int n;
    cin>>n;
Count(n);

    return 0;
}