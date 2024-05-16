#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, string> m;
    m[1]="abc";   //O(logn)
    m[5]="bcd";
    m[3]="efg";
    m.insert({4,"gfg"});
    m[5]="bcd";  //Unique KEys

    auto itr=m.find(3);  //If No value, it'will return end() iterator.
    cout<<"Key-Value pair is: "<<endl;
    if(itr==m.end()){
        cout<<"NO Value"<<endl;
    }
    
    else{
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }


    //Will print in Increasing/Ascending Order......
    map<int, string> :: iterator it;
    for(it=m.begin();it!=m.end();++it){
        cout<<it->first<<" "<<it->second<<endl;  //O(NlogN)
    }
    cout<<endl;
    m.erase(5);  //O(logN)
    cout<<"Size"<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}