#include <iostream>
#include <vector>
#include <string>
#include <limits.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        int min_size = INT_MAX;
        for (string x : strs)
            if (x.size() < min_size)
                min_size = x.size();

        for (int i = 0; i < min_size; i++){
            char tmp = strs[0][i];
            for (int j = 0; j < strs.size(); j++){
                if (tmp != strs[j][i]){
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0].substr(0, min_size);
    }
};

int main(){
    vector<string> strs = {"dog","docecar","docar"};
    Solution sol;
    cout << sol.longestCommonPrefix(strs);
}