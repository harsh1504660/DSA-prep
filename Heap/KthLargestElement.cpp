#include <iostream>
#include<queue>
using namespace std;


int kthElemnet(int arr[],int l,int r,int k){
    priority_queue<int> pq;
    for(int i = 0;i<k;i++){
        //step 1 : 
        pq.push(arr[i]);
    }

    //step2 :
    for(int i = k ; i<=r ; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);

        }
    }
    // ans  = pq.top
   int ans = pq.top();
   return ans;

}

int main()
{
    
    return 0;
}