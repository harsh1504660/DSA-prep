#include <iostream>
using namespace std;

int MinMaxArray(int arr[],int size){
    int max=0;
    int min=0;
    for (int i=0,j=1;i<size;i++,j++){
        if ((arr[i]) > max){
            max=arr[i];
        }
        if ((arr[i]) < min){
            min=arr[i];
        }
    }
    cout<<max<<" "<<min<<endl;
}

int main(){

    int num[6] = {0,-1,2,3,4,55};
    MinMaxArray(num,6);
    return 0;
}