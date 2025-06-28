#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{

    //creation
    unordered_map<string,int> m;


    //insertion 1
    pair<string ,int> p = make_pair("babbr",3);
    m.insert(p);

    //2
    pair<string,int> q("love",2);
    m.insert(q);

    //3
    m["mera"] = 1;


    //Searching
    cout<<m["mera"]<<endl; ////   if mera is not there then first it will creat one piar for mera with 0 key
    cout<<m.at("babbr")<<endl;  // but if babbr is not there in map then it will throuw erere

    //size
    cout<<m.size()<<endl;


    //to check presence
    cout<<m.count("bro")<<endl;

    //earase
    m.erase("love");
    cout<<m.size()<<endl;

    //iteration 1
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    //2
    unordered_map<string,int> :: iterator it = m.begin();

    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



    return 0;
}