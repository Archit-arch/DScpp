#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<[] (int x) {return x+2;} (2)<<endl;
    //We can also Assign it to a variable

    auto sum=[] (int x, int y) {return x+y;};
    cout<<sum(2,3)<<endl;

    vector<int> v={2,3,5};
    cout << all_of(v.begin(), v.end(), [](int x) {return x>0;})<<endl;
    cout << any_of(v.begin(), v.end(), [](int x) {return x>0;})<<endl;
    cout << none_of(v.begin(), v.end(), [](int x) {return x>0;})<<endl;
}