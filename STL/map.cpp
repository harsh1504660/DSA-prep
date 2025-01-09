#include<iostream>
#include<map>    //python dictionary

using namespace std;

int main(){

    map<int,string> m;
   

    m[1] = "harsh";
    m[5]  = "joshi";
    m[22323] = "jay";

    m.insert({88,"bheem"});
    for (auto i:m){

        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"is 1 presnt"<<m.count(1);
     return 0;
}