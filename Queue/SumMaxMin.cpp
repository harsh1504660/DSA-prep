#include <iostream>
#include<queue>
using namespace std;

int solver(int *arr,int k,int n){
    deque<int> maxi(k);
    deque<int> mini(k);

    //addition of first k size window
    for(int i=0;i<k;i++){
        while(!maxi.empty() && arr[maxi.back()] <=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()] >=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }
    int ans = 0  ;
    for(int i=k;i<n;i++){
        ans += arr[maxi.front()]+arr[mini.front()];

        //next window

        //removal
        while(!maxi.empty() && i-maxi.front() >=k){
            maxi.pop_front();
        }
        while(!mini.empty() && i-mini.front() >=k){
            mini.pop_front();
        }

        //addition
        while(!maxi.empty() && arr[maxi.back()] <=arr[i]){
            maxi.pop_back();
        }
        while(!mini.empty() && arr[mini.back()] >=arr[i]){
            mini.pop_back();
        }
        maxi.push_back(i);
        mini.push_back(i);
    }

    //make sure to consider the last windeow
    ans += arr[maxi.front()]+arr[mini.front()];

    return ans ;
}

int main()
{
    int arr[7] = {2,5,-1,7,-3,-1,-2};
    int k =4;
    cout<<solver(arr,k,7)<<endl;
    return 0;
}