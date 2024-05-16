#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int gcd=__gcd(a,b);
    cout<<gcd<<endl;

    int c=5;
    int d=3;
    cout<<"If gcd(a,b)=1, then the 2 numbers a and b have noting in commmon"<<endl;
    int gc=__gcd(c,d);
    cout<<gc<<endl;
}