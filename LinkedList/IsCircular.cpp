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
bool isCircularList(Node* head){
    if(head ==NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp!=NULL || temp!= head){
        temp = temp -> next;
    }
    if (temp ==head){
        return true;
    }
    return false;
}
int main()
{
    
    return 0;
}