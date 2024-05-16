#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;
    p=make_pair(2,"ABC");

    cout<<p.first<< " "<<p.second<<endl;
    
    pair<int,string> p1=p;   //copy
    p1.first=3;
    cout<<p.first<< " "<<p.second<<endl;

    pair<int,string> &p2=p;   //REFERENCE
    p2.first=3;
    cout<<p.first<< " "<<p.second<<endl;
}