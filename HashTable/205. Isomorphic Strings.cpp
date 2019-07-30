#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
    bool isIsomorphic(string s, string t){
        if (s.size() != t.size())
            return false;

        // 构造两个映射
        unordered_map<char, char> map1, map2;
        for (int i = 0; i < s.size(); i++){
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }

        // 将映射的单词与t进行对比
        for (int i = 0; i < t.size(); i++)
            if (t[i] != map1[s[i]] || s[i] != map2[t[i]])
                return false;
        return true;
    }
};

int main(){
    string s = "ab", t = "aa";
    // map1: a -> a, b -> a
    // map2: a -> b

    Solution sol;
    cout << sol.isIsomorphic(s, t);
}
