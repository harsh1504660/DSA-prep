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
int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
Node* findMiddle(Node* head){
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt=0;
    while(cnt < ans){
        temp = temp->next;
        cnt++;
    }

    return temp;
}
int main()
{
    
    return 0;
}