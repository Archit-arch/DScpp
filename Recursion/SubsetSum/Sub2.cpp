/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector> // Include the vector header
#include <algorithm> // Include the algorithm header for sort
using namespace std;

class Solution {
public:
    void findSubsets(int ind, std::vector<int>& nums, std::vector<int>& ds, std::vector<std::vector<int>>& ans) {
        ans.push_back(ds);

        for (int i = ind; i < nums.size(); i++) {
            if (i != ind && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);

            findSubsets(i + 1, nums, ds, ans);

            ds.pop_back();
        }
    }

    std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::vector<int> ds;
        std::sort(nums.begin(), nums.end()); // Use std::sort

        findSubsets(0, nums, ds, ans);

        return ans;
    }
};


int main() {
    // Example of how to use the Solution class
    std::vector<int> input = {1, 2, 2};
    Solution solution;
    std::vector<std::vector<int>> result = solution.subsetsWithDup(input);

    // Display the result
    for (const auto& subset : result) {
        std::cout << "[ ";
        for (const auto& num : subset) {
            std::cout << num << " ";
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}
