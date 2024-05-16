#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){       //Base Case
        return 1;
    }
    return n*fact(n-1);   //Recursive call
}
int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin >> n;
    int ans=fact(n);
    cout<<"The factorial is: "<<ans<<endl;
}