#include <iostream>
using namespace std;


bool LinearSearch(int arrr[],int size,int num){
    for (int i=0;i<size;i++){
        if (num==arrr[i]){
            return 1;
        }

    }
    return 0;
}
int main(){
    int num = 5;
    int arrr[5] = {1,2,3,4,5};
    int res = LinearSearch(arrr,5,num);
    cout<<"result : "<<res<<endl;
    return 0;

}