#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        // 取出数字中的每一个数字到数组中
        vector<int> vec;
        while (x > 0){
            vec.push_back(x % 10);
            x /= 10;
        }

        for (int i = 0; i < vec.size(); i++){
            if(vec[i] != vec[vec.size()-1-i])
                return false;
        }
        return true;
    }
};

int main(){
    Solution sol;
    cout << sol.isPalindrome(990);
}
