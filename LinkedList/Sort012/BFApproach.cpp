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
Node* SortList(Node* head){
    int zerocount = 0  ; 
    int onecount = 0 ; 
    int twocount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp -> data ==0){
            zerocount++;
        }
        else if (temp->data ==1){
            onecount++;
        }
        else{
            twocount++;
        }
        temp = temp ->next ;
    }
    temp = head;
    while (temp!=NULL){
        if(zerocount !=0){
            temp->data=0;
            zerocount--;
        }
        else if(onecount !=0){
            temp->data = 1 ;
            onecount--;
        }
        else{
            temp -> data = 2;
            twocount--;
        }
        temp=temp -> next;
    }
    return head;
}
int main()
{
    
    return 0;
}