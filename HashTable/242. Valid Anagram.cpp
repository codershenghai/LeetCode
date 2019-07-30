#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// 如果两个单词包含相同的字母，但是字母的顺序不同，那么称这两个单词为字母异位词
class Solution {
public:
    // 将s和t中每个字母加入两个哈希表，哈希表的值为字母出现的次数，比较
    // 两个哈希表中每个字母对应的次数即可。
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        unordered_map<char, int> map1, map2;
        int j = 0;
        for (int i = 0; i < s.size(); i++){
            if (map1.count(s[i]))
                map1[s[i]]++;
            else
                map1[s[i]] = 1;

            if (map2.count(t[i]))
                map2[t[i]]++;
            else
                map2[t[i]] = 1;
        }
        return map1==map2 ? true : false;
    }
};


int main(){
    string s = "·rat", t = "car";
    Solution sol;
    cout << sol.isAnagram(s, t);
}