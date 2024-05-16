#include<bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
   int n=a.size();
   vector<int> ans;

   for(int i=0;i<n;i++){
       bool flag=true;
       for(int j=i+1;j<n;j++){
           if(a[j] >=a[i]){
               flag=false;
               break;
           }
       }

       if(flag==true){
           ans.push_back(a[i]);
       }
   }

   sort(ans.begin(), ans.end());
   return ans;
}
int main(){

    vector<int> v={1,2,3,2};
    vector<int> sol=superiorElements(v);
    for(auto it: sol){
        cout<<it<<endl;
    }
    return 0;
}