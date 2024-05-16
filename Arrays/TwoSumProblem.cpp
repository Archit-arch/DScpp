#include<bits/stdc++.h>
using namespace std;

vector<int> twosum(int n, int arr[], int target){
    //Using Hashing..
    map<int, int> mpp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int more=target-a;

        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        
        mpp[a]=i;
    }
    return {-1,-1};

}
int main(){
    int arr[5]={2,6,5,8,11};
    int target=14;
    int n=5;
    vector<int> list=twosum(n,arr,target);
    for(auto it: list){
        cout<<it<<endl;//Returns the indices..
    }


}