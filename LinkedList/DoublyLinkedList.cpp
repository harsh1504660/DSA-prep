#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this ->prev = NULL;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    int len =0;
    Node* temp = head;
    while(temp!=NULL){
        len++;
        //cout<<temp->data;
        temp = temp->next;
    }
    return len;
}
void InsertAthead(Node* & head,int data){
    Node* temp = new Node(data);
    temp ->next = head;
    head-> prev = temp;
    head = temp;
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1 ;
    print(head);
    cout<<getLength(head)<<endl;
    InsertAthead(head,11);
    print(head);
    return 0;
}

