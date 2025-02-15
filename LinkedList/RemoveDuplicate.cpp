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

Node* rempoveDuplicate(Node* head){
    //empty list 
    if(head ==NULL){
        return NULL;
    }

    //non empty list 
    Node* curr = head;

    while(curr !=NULL){
        if((curr-> next != NULL) && curr ->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr->next = next_next;
        }
        else{
            curr = curr -> next;
        }
    }
    return head;
}
int main()
{
    
    return 0;
}