#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a, a+n);
     for(int i=0;i<n;i++){
        cout<< a[i]<<endl;
    }
    cout<<endl;

    int *ptr=lower_bound(a, a+n , 5);
    if(ptr==(a+n)){
        cout<<"Not Found"<<endl;
        return 0;
    }
    cout<<*(ptr)<<endl;

}