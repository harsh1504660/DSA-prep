#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0 ;
    while(i<=n){
        int j=0;
        while (j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


    // int row=1;
    // while(row<=n){
    //     int col = 1 ;
    //     while(col<=n){
    //         char ch='A'+row-1;
    //         cout<<ch;
    //         col = col+1;

    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    
    // int row=1;
    // while(row<=n){
    //     int col = 1;
    //     char ch ='A';
    //     while(col<=n){
    //         cout<<ch;
    //         ch=ch+1;
    //         col=col+1;
    //     }
    //     cout<<endl;
    //     row=row+1;
    // }

    int row=1;
    char ch = 'A';
    while(row<=n){
        int col =1;
        while (col<=row){
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        ch=ch+1;
        row=row+1;
    }
    return 0;

}