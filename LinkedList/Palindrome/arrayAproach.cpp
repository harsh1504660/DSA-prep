#include <iostream>
#include <vector>
using namespace std;
class Node {
    public :
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this ->next = NULL;

    }
    ~Node (){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            next =NULL;

        }
        cout<<"Memroy is deleted for value : "<<value<<endl;
    }
};
bool checkPalindrome(vector<int> arr){
    int n = arr.size();
    int s = 0 ; 
    int e = n-1;
    while(s<=e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
bool isPalindrome(Node* head){
    vector<int> arr;

    Node* temp = head;
    while (temp!= NULL){
        arr.push_back(temp->data);
        temp = temp -> next;
    }
    return checkPalindrome(arr);
}

int main()
{
    
    return 0;
}