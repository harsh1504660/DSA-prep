#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"size of vector : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size of vector : "<<v.capacity()<<endl;

        v.push_back(1);
    cout<<"size of vector : "<<v.capacity()<<endl;
        v.push_back(1);
    cout<<"size of vector : "<<v.capacity()<<endl;
    cout<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"first "<<v.front()<<endl;
    cout<<"last "<<v.back()<<endl;    

    cout<<"Before popping out the element "<<endl;
    for (int i:v){
        cout<<i<<" "<<endl;
    }

    v.pop_back();

    cout<<"After popping out the element "<<endl;
    for (int i:v){
        cout<<i<<" "<<endl;
    }

    vector<int> a(5,1);   // initilized all the element with one 
        cout<<"printing the elemnts "<<endl;
    for (int i:a){
        cout<<i<<" ";
    }
    return 0;
}