#include <iostream>
using namespace std;
int findDuplicate(int arr[], int size) 
{
    for (int i = 0; i < size; i++) {
        int item = arr[i];
        int count = 0; // Reset count for each new item
        for (int j = 0; j < size; j++) {
            if (item == arr[j]) {
                count++;
                if (count == 2) { // Return the item if it appears twice
                    return item;
                }
            }
        }
    }
    return -1; // Return -1 if no duplicate is found
}

int main() {
    int arr[8] = {4, 6, 7 ,1, 3, 5 ,2 ,7 };
    int item = findDuplicate(arr, 8);
    cout << item;
    return 0;
}

