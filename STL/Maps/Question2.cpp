/*
Given N strings and Q queries 
In each query u are given a String
print frequency of thatstring

Q<=10^6  T.C. KAM KARNI hai
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string, int> m;
    int n;
    cin>>n;

    for(int i=0;i<n;++i){
        string s;
        cin >> s;
        m[s]++;
    }

    int q;
    cin >> q;

    while(q--){
        string s;
        cin >> s;
        cout << m[s] << endl;
    }
}