#include <sstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str)
    {
        unordered_map<string,char>hash;
        unordered_map<char,string>hash1;
        string s;
        stringstream iss(str);
        int i=0;
        while(iss>>s)
        {
            if(hash.find(s)==hash.end() && hash1.find(pattern[i])==hash1.end())
            // hash.end()返回的是指针，指向unordered_map的最后
            // hash中找不到s 且 hash1中找不到pattern[i]
            {
                hash[s] = pattern[i];
                hash1[pattern[i]] = s;
            }
            else
            {
                if(hash[s] != pattern[i] || hash1[pattern[i]] != s)
                    return false;
            }
            i++;
        }
        if(i!=pattern.size())
            return false;
        return true;
    }
};

int main() {
    string pattern = "e";
    string str = "eukera";
    Solution sol;
    cout << sol.wordPattern(pattern, str);
}