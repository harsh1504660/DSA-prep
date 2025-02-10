#include <iostream>
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

void InsertNode(Node* &tail,int element,int data){
    //assumaing that element is present in the list 

    //empty list
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non empty list 
        Node* curr = tail;
        while(curr->data !=element){
            curr = curr -> next;
        }
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}
void print(Node* tail){
    Node* temp = tail;
    do {
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail !=temp);
}
int main()
{
    Node* tail = NULL;

    InsertNode(tail,5,3);
    print(tail);

    InsertNode(tail,3,5);
    print(tail);
    return 0;
}