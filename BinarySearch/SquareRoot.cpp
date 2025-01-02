#include<iostream>
using namespace std;

int Sqrt(int inp){
    int s=1;
    int e = inp;
    int ans = -1; 
    while(s<=e){
        long long int mid = s+(e-s)/2;
        long long int square = mid * mid;
      
        if (square==inp){
            return mid;
        }
        if (square <inp){
            ans = mid;
            s = mid+1;
        }
        if (square > inp){
        e = mid-1;
    }
    }
    return ans;

    
}

int main(){
    int s = Sqrt(1000000);
    cout<<s;
    return 0;
}