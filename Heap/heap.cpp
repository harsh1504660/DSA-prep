#include <iostream>
using namespace std;

//ologn
class heap{
    public:
    int arr[100];
    int size = 0 ; 

    heap(){
        arr[0] = -1;
        size=0;
    }
    void insert(int value){
        size = size+1;
        int index= size; 
        arr[index] = value;


        while(index>1){
            int parent = index/2;

            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i = 1 ; i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    heap  h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    return 0;
}