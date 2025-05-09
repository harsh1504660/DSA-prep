#include <iostream>
using namespace std;


void merge(int *arr,int s ,int e){
    int mid = (s+e)/2;

    int len1 =mid - s +1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex =s;
    for(int i =0;i<len1;i++){
        first[i] = arr[mainArrayIndex++];
    }

    int k =mid+1;
    for(int i =0;i<len2;i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0 ;
    int index2 = 0 ; 
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2){
        if (first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while(index1 < len1){
      arr[mainArrayIndex] = first[index1++];  
    }
    while (index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
}
int mid;

void mergesort(int *arr,int s ,int e)
{   
    if (s>=e){
        return ;

    }


    // left part sorting
    mergesort(arr,s,mid);

    // right part sorting 
    mergesort(arr,mid+1,e);

    //mergin of two array
    merge(arr,s,e); 
}

int main()
{
    int arr[5] = {2,5,1,6,9};
    int n=3;

    mergesort(arr,0,n-1);
    return 0;
}

