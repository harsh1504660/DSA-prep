#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    ~Node(){
        int value = this -> data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"MEMORY IS FREE FOR NODE WITH DATA : "<<value<<endl;
    }
};
//Insertion of node 
void InsertAtHead(Node* &head,int data){

    Node* temp = new Node(data);
    temp -> next =  head;
    head = temp;
}
void InsertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail -> next  = temp;
    tail = tail -> next;
}

//Deleting a node 
void deleteNode(int position , Node* &head){
    //deleting first node
    if (position ==1){
        Node* temp = head;
        head = head->next;

        //freeing the memeory for first node 
        temp -> next = NULL;
        delete temp;
    }
    else {
        //deleting middle and last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt =1;
        while (cnt <position ){
            prev = curr ;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}



//inserting at perticuler position 
void insertAtPositions(Node* &tail,Node* &head,int position , int data){

    //insert at first position 
    if (position==1){
        InsertAtHead(head,data);
        return;
    }


    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1){
        temp = temp -> next;
        cnt++;

    }
    //inserting at last position 
    if (temp -> next ==NULL){
        InsertAtTail(tail,data);
        return;
    }



    //creating a node for data
    Node* nodeToInsert = new Node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert; 
}

//printitng the ll
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl; 
}



int main()
{
    Node* node1 = new Node(1);
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;  

    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtTail(tail,2);
    print(head);

    InsertAtTail(tail,3);
    print(head);

    insertAtPositions(tail,head,4,444);
    print(head);

    cout<<endl;

    cout<<"head -->"<<head->data<<endl;
    cout<<"Tail -->"<<tail->data<<endl;

    deleteNode(4,head);
    print(head);
    return 0;
}