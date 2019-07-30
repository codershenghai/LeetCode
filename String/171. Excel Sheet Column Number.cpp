#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int res = 0;
        for (char i : s)
            res = res * 26 + (i - 'A' + 1);
        return res;
    }
};


int main(){
    string s = "ZY";
    Solution sol;
    cout << sol.titleToNumber(s);
}