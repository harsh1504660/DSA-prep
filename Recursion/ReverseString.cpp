#include <iostream>
using namespace std;
#include <string>


void ReverseString(string &a,int i ,int j ){
    if (i > j){
        return ;
    }
    swap(a[i],a[j]);
    i++;j--;
    ReverseString(a,i,j);
}


int main()
{
    string a = "jay bhim";
    ReverseString(a,0,a.length()-1);
    cout<<a;
    return 0;
}