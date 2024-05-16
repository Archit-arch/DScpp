#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of elements: "<<endl;
    cin >> n;
    vector<int> v(n);

    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(auto &val: v){
        cout<<val<<endl;
    }

}