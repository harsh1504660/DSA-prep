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
void reverse(Node* &head,Node* curr,Node* prev){
    //base case 
    if (curr==NULL){
        head = prev;
        return;
    }

    Node* forward = curr ->next;
    reverse(head,forward,curr);
    curr->next = prev;
}
Node* reverseLinkedList(Node* head){
    Node* curr = NULL;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
}

int main()
{
    
    return 0;
}