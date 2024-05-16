#include<bits/stdc++.h>
using namespace std;
/*
Given N strings, Print unique strings 
in Lexographical order
with their frequency.
abc 
def
abc
ghj
jkl
ghj
ghj
abc
*/
int main(){
    map<string, int> m;
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;++i){
        string s;
        cin >> s;
        m[s]=m[s]+1;  //Frequency
    }

    for(auto pr:m){
        cout<<pr.first<< " "<< pr.second <<endl;
    }
}