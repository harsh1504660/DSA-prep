#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"value of a is: "<<n;
    //int b = cin.get();
    if (n>0){
        cout<<"a is +ve";
    }
    else if(n==0){
        cout<<"it is zero";
    }
    else{
        cout<<"else block";
    }
    // int i =1;
    // int sum = 0;
    // while (i<=n){
    //     cout<<i<<" ";
    //     i=i+1;
    //     sum=sum+i;
    // }
    // cout<<"sum is"<<sum;
    
    // int i = 1;
    // while (i<=n){
    //     int j =1;
    //     while (j<=n){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }
    cout<<endl;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}