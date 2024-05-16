#include<bits/stdc++.h>
using namespace std;
//MOORE's VOTING ALGORITHM
int find(vector<int> &arr){
    int cnt=0;
    int ele;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        else if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==ele) cnt1++;

    }

    if(cnt1> n/2) return ele;
    return -1;
}
int main(){
     // Example usage
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int result = find(arr);

    if (result != -1) {
        cout << "Majority Element: " << result << endl;
    } else {
        cout << "No Majority Element found" << endl;
    }

    return 0;

}