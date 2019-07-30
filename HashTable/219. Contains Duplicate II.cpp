#include <unordered_map>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if (nums.size() == 0)
            return false;
        unordered_map<int, int> map;
        int i = 0;
        bool flag = false;
        for (int x : nums){
            // 判断哈希表中是否存在x
            if (map.count(x)){
                flag =  i-map[x]<=k ? true : false;
                if (flag == true)
                    return flag;
            }
            map[x] = i++;
        }
        return flag;
    }
};

int main(){
    vector<int> nums = {0,1,2,3,4,0,0,7,8,0};
    int k = 1;
    Solution sol;
    cout << sol.containsNearbyDuplicate(nums, k);
}
