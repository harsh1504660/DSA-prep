#include <iostream>
#include <unordered_map>
using namespace std;
class Node {
    public :
    int data;
    Node *next;
    Node* random;
    Node(int data){
        this-> data = data;
        this-> next = NULL;
        this-> random = NULL;

    }
};
void inseretAtTail(Node* head, Node* tail , int d){
    Node* newNode = new Node(d);
    if (head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else {
        tail -> next = newNode;
        tail = newNode;
    }
}
Node* copyList(Node* head){
    // step -1 create  a clone list 
    Node* clonehead = NULL ;
    Node* cloneTail = NULL;

    Node* temp = head;
     
    while (temp != NULL){
        inseretAtTail(clonehead,cloneTail,temp->data);
        temp = temp -> next;
       
    }

    //step 2 : create a map 
    unordered_map<Node* ,Node*>oldNewNode;

    Node* orignalNode  = head;
    Node* cloneNode  =clonehead;
    while(cloneNode!=NULL && cloneNode != NULL ){
        oldNewNode[cloneNode] = cloneNode;
        orignalNode = orignalNode->next;
        cloneNode = cloneNode -> next;
    }

    orignalNode = head;
    cloneNode = clonehead;

    while(orignalNode != NULL ){
        cloneNode -> random = oldNewNode[orignalNode->random];
        orignalNode = orignalNode->next;
        cloneNode = cloneNode -> next;
    }

    return clonehead;

}
int main()
{
    
    return 0;
}