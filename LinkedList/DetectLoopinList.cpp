#include <iostream>
#include<map>
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

bool IsLoop(Node* head){
    if(head==NULL ){
        return false;
    }
    map<Node*,bool> visited;

    Node* temp = head;

    while(temp!= NULL ){

        //cycle is present 
        if (visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp = temp-> next;
    }
    return false ;
}
int main()
{
    
    return 0;
}