#include <iostream>
#include <vector>
#include <algorithm>

int findMaxConsecutiveOnes(std::vector<int>& nums) {
    int count = 0;
    std::vector<int> list;

    for (int i = 0; i < nums.size(); i++) {
        while (i < nums.size() && nums[i] == 1) {
            count++;
            i++;
        }
        list.push_back(count);
        count = 0;
    }

    return *std::max_element(list.begin(), list.end());
}

int main() {
    std::vector<int> nums = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1};

    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);

    std::cout << "Maximum Consecutive Ones: " << maxConsecutiveOnes << std::endl;

    return 0;
}
