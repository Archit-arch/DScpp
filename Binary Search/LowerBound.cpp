#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> arr, int n, int target){

    int low=0;
    int high=n-1;
    int ans=n;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]>=target){   //LEft
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
//Lower-bound :  Smallest Index suct that arr[mid]>=target;
int main(){
    vector<int> a={1,2,3,3,5,7,8,9,12,12,14,18};
    int n=12;
    int target=6;

    int ans=lower_bound(a, n, target);

    cout<<ans<<" ";
}