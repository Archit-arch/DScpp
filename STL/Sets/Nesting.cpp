#include<bits/stdc++.h>
using namespace std;
int main(){
    
    map<pair<string, string>, vector<int> > m;
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for(int j=0; j < ct; ++j){
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    cout<< endl;
    //PRINTING.....
    for(auto &pr : m){
        auto &fullname = pr.first;
        auto &list = pr.second;

        cout << fullname.first << " " << fullname.second << endl;
        cout << list.size()<< endl;
    }
}