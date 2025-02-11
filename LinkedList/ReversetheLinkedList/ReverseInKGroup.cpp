#include <iostream>
using namespace std;

class Node {
    public :
    int data;
    Node *next;
    Node(int data){
        this-> data = data;
        this-> next = NULL;

    }
};

Node* kReverse(Node* head , int k){
    //base case 
    if(head==NULL){
        return NULL;
    }
    //STEP1 : REVERSE K NODES
    Node* next = NULL;
    Node* curr = head;
    Node* prev = NULL;
    int count = 0 ; 

    while(curr != NULL && count < k){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    //step 2  recurstion dekhega aageka
    if(next != NULL){
        head -> next = kReverse(next,k);
    }

    //step 3 return head of reverse list 
    return prev;
}
int main()
{
    
    return 0;
}