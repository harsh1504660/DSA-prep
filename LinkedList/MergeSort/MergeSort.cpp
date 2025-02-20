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


Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next !=NULL){
        slow= slow->next;
        fast = fast -> next -> next;
    }
    return slow; 
}

Node* merge(Node* left,Node* right){

    if(left ==NULL){
        return right;
    }
    if(right ==NULL){
        return left;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;

    while (left != NULL && right != NULL){
        if(left ->data < right-> data){
            temp -> next = left ;
            temp = left;
            left = left -> next;
        }
        else{
            temp -> next =right;
            temp = right;
            right =right -> next;
        }
    }
    while (left!= NULL){
        temp -> next = left ;
        temp = left;
        left = left -> next;
    }
    while (right!= NULL){
        temp -> next =right;
        temp = right;
        right =right -> next;
    }
    ans = ans->next;
    return ans ; 
}


Node* mergeSort(Node* head){
    // base case
    if(head == NULL || head->next==NULL){
        return head ;
    }

    // seprate the LL in two parts
    Node* mid = findMid(head);

    Node* left = head ; 
    Node* right = mid->next;
    mid -> next = NULL;


    // recursive call for both halfs 
    Node* left = mergeSort(left);
    Node* right = mergeSort(right);

    //merge both lrft and right halfs
    Node* result = merge(left,right);
    return result ; 
}
int main()
{
    
    return 0;
}