/*
vector<int> :: iterator it;
for(it=vbegin();it!=v.end();++it){
    cout<<*(it)<<endl;
}
This is very tedious to write 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,3,4,5};
    for(int value: v){
        cout<<value<<" ";
    }
    /*
    Here a copy is created 
    */
   cout<<endl;
   /*
   To counter this, we use References to update the values
   */
   for(int &val: v){
      val++;
   }
   for(int val:v){
    cout<<val<<" ";
   }

   //Auto Based Loop: Knows the datatype itself doesnt need to mention datatype of container
   for(auto it=v.begin();it!=v.end();it++){
    cout<<*(it)<<" ";
   }
}