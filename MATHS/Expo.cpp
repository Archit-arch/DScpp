#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, x;
    cin >> a >> x;
    int res=1;
    for(int i=1;i<=x;i++){
        res=res*a;

    }
    cout<< res << "\n";
    return 0;
}