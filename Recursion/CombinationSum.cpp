#include<bits/stdc++.h>
using namespace std;
class Solution {
public:

    void findCombination(int index, vector<int>& arr, int target,vector<int>&ds, vector<vector<int>>&ans ){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }

        //PICK up the element.....
        if(index<=target){
            ds.push_back(arr[index]);
            findCombination(index, arr, target-arr[index],ds, ans);
            ds.pop_back();
        }

        //NOT Picking up the element....
        findCombination(index+1,arr, target, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, candidates, target, ds, ans);
        return ans;
        
    }
};