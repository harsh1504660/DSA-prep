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


//reversing the function 
Node* reverse(Node* head){
    Node* prev = NULL;
    Node* forward = NULL;
    Node* curr = head;
    while(curr != NULL){
        forward = curr ->next;
        curr -> next = prev;
        prev = curr;
        curr = forward ;
    }
    return prev;
}

//insert at tail
void insertAtTail(Node* &head,Node* &tail, int digit){
    Node* temp= new Node(digit);
    if(head ==NULL){
        head = temp;
        tail = temp;
        return ;
    }
    else{
        tail ->next = temp;
        tail = temp;
    }

}

// addition 
Node* add(Node* first , Node* second){
    int carry =0 ;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first!=NULL && second !=NULL){
        int sum = carry + first->data+second->data;

        int digit = sum%10;

        //create Node and add answer LL
        insertAtTail(ansHead,ansTail,digit);

        carry = sum/10;
        first = first ->next;
        second = second ->next;
    }


    // FOR DIFFRENT SIZE CASES
    while(first!=NULL){
        int sum = carry+first->data;
        int digit = sum%10;

        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first ->next;
    }

    while(second!=NULL){
        int sum = carry+second->data;
        int digit = sum%10;

        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        second = second ->next;
    }

    while(carry !=0){
        int sum = carry;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
    }
    return ansHead;
}


//add two numbers main finction
Node* addTwoNumbers(Node* first,Node* second){

    //step-1 reverse the input list 
    first = reverse(first);
    second = reverse(second);

    //step-2 add two LL
    Node* ans = add(first,second);

    //step-3 reverse the answer LL
    ans = reverse(ans);

    return ans;
}
int main()
{
    
    return 0;
}