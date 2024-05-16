#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n=1,m=0;
    cin >> n;
    string s;
    cin >> s;
    bool fr=false;
    bool fl = false;

    for(auto &cs : s){
        if(cs=='L') fl=true;
        if(cs=='R') fr=true;
    }

    for(int i=1;i<n;i++){
        if(s[i]=='L' && s[i-1]=='R'){
            cout<<"0\n";
            return ;
        }
    }

    if(!fr || !fl){
        //Saare left ya right ho toh..
        cout<<"-1\n";
    }

    for(int i=1;i<n;i++){
        if(s[i-1]=='L' && s[i]=='R'){
            cout<<i<<"\n";
            return;
        }
    }
}
int main(){
    long long  t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;

    return 0;
}