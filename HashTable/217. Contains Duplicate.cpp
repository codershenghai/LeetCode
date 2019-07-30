#include <unordered_set>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 0)
            return false;
        unordered_set<int> set;
        for (int i : nums)
            set.insert(i);
        return set.size() != nums.size() ? true : false;
    }
};

int main(){
    vector<int> nums = {1,2,3,1};
    Solution sol;
    cout << sol.containsDuplicate(nums);
}