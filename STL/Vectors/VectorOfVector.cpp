#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
    cout<<endl;
}
int main(){
    int N;
    cout<<"Enter size: "<<endl;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n;
        cout<<"Enter size of vector: "<<endl;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++){
        printVec(v[i]);
    }
}
/*
Vector of Vectors: Rows and Colums Both are Variable
Array Of Vectors: Rows are FIXED and Columns are VARIABLE
*/

