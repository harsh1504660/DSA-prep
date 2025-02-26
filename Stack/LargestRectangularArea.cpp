#include <iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> arr,int n){

}

vector<int> prevSmallerElement(vector<int> arr,int n){
    
}

int largestReactangularArea(vector<int> &height)
{
    int n = height.size();

    vector<int> next(n);
    next = nextSmallerElement(height,n);

    vector<int> prev(n);
    prev = prevSmallerElement(height,n);

    int area = INT16_MIN;
    for(int i=0;i<n;i++){
        int l = height[i];
        int b = next[i] - prev[i]-1;

        if(next[i]==-1){
            next[i] = n;
        }
        int newArea = l*b;
        area = max(area,newArea);
    }
}
int main()
{
    
    return 0;
}