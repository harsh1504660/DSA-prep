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

void insertAttail(Node*& tail,Node* curr){
    tail ->next = curr;
    tail = curr;
}

Node* sortList(Node* head){
    Node* zerohead = new Node(-1);
    Node* zerotail= zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;

    Node* curr = head;

    //create seperate list for 0 1 2s 
    while(curr !=NULL){
        int value = curr -> data;

        if(value==0){
            insertAttail(zerotail,curr);
        }
        else if(value==1){
            insertAttail(onetail,curr);
        }
        else if (value==2){
            insertAttail(twotail,curr);
        }
        curr = curr -> next;
}

    //merge three lists
    if(onehead -> next !=NULL){ // 1s list should be non empty
        zerotail ->next = onehead -> next;
    }
    else{
        zerotail -> next = twohead -> next;
    }
    onetail -> next = twohead -> next;
    twotail->next = NULL;

    //setup head
    head = zerohead -> next;

    //delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}
int main()
{
    
    return 0;
}