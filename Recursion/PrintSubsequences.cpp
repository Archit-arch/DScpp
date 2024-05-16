#include<bits/stdc++.h>
using namespace std;
void printF(int index, vector<int> &ds, int arr[], int n){
    if(index==n){
        for(auto it: ds){
            cout<<it<<" ";
        }
    cout<<endl;
    return;
    }
}

int main(){
    int arr[]={3,1,2};
    int n=3;
    vector<int> ds;
    printF(0, ds, arr, n);
}