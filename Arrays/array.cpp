#include <iostream>
using namespace std;

void PrintArray(int a[],int n){
        for (int i=0;i<n;i++){
        cout<<endl;
        cout<<"value is : "<<a[i]<<endl;
    }
    cout<<"done"<<endl;
}
int main(){
    int number[15];
    int num[3] = {0,1,2};
    cout<<"first index"<<number[0];
    cout<<"first index"<<num[0];

    PrintArray(num,3);

    int size  = sizeof(number)/sizeof(int);
    cout<<"The size of array is :"<<size<<endl; // 15*4 = 60  
    return 0;
}