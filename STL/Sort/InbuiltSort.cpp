#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter no of elements: "<<endl;
    cin >> n;
    int a[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a+2, a+n);
    cout<<"After Sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<< a[i]<< endl;
    }
}