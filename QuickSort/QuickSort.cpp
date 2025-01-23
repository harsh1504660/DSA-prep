#include <iostream>
using namespace std;



int partition(int arr[],int s , int e ){

    // get the pivot index [ starting element]
    int pivot = arr[s];


    // count how many numbers are less than pivot number ---> to find the right place for pivot index 
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i] <=pivot){
            cnt++;
        }
    }
    
    // right place for pivot number
    int pivotIndex  = s+cnt;  
    swap(arr[pivotIndex],arr[s]);

    // left and right wala part handel karte hein
    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if (i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;

}



void quicksort(int arr[],int s, int e )
{
    //base case
    if(s>=e){
        return ;
    }

    // partittion karenge
    int p =partition(arr,s,e);

    //left part sort karo
    quicksort(arr,s,p-1);

    //right sort karo
    quicksort(arr,p+1,e);
}

int main()
{
    int arr[5] = {2,4,1,6,9};
    int n = 5;
    quicksort(arr,0,n-1);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}