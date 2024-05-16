#include<bits/stdc++.h>
using namespace std;

vector<int> print(int n){
    if(n==0){
        return vector<int>();
    }
    vector<int> ans=print(n-1);
    ans.push_back(n);
    return ans;
}
int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin >> n;
    vector<int> ans=print(n);
    for(auto it: ans){
        cout<<it<<endl;
    }
}