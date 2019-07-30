#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0)
            return 0;
        for (int i = 0; i < haystack.size(); i++){
            if (haystack.substr(i, needle.size()) == needle)
                return i;
        }
        return -1;
    }
};

int main(){
    string haystack = "bbaaaaa", needle = "bba";
    Solution sol;
    cout << sol.strStr(haystack, needle);
}