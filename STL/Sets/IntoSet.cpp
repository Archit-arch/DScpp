#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value: s){
        cout<<value<<endl;
    }

}

int main(){
    set<string> s;
    s.insert("ABC");
    s.insert("ZSFD");
    s.insert("BCD");
    auto it=s.find("ABC");
    if(it !=s.end()){
        cout<< (*it);
    }
    s.erase("ZSFD");
    print(s);
}