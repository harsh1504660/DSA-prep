#include<iostream>
using namespace std;

int main(){
    char ch[20];
    cin>>ch;
    int c;
    for (int i=0;ch[i]!='\0';i++){
        cout<<ch[i]<<'\n';
        c=i;
    }
    cout<<c+1<<'\n';

    return 0;
}