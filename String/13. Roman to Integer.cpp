#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        unordered_map<char, int> map;
        map['V'] = 5, map['L'] = 50, map['D'] = 500, map['M'] = 1000;

        for (int i = 0; i < s.size(); i++){
            switch (s[i]) {
                // 如果 case 语句不包含 break，控制流将会继续后续的 case，直到遇到 break 为止。
                // 当遇到 break 语句时，switch 终止，控制流将跳转到 switch 语句后的下一行。
                case 'I':
                    if (s[i + 1] == 'V') {
                        sum += 4;
                        i++;
                    } else if (s[i + 1] == 'X') {
                        sum += 9;
                        i++;
                    } else sum += 1;
                    break;

                case 'X':
                    if (s[i + 1] == 'L') {
                        sum += 40;
                        i++;
                    } else if (s[i + 1] == 'C') {
                        sum += 90;
                        i++;
                    } else sum += 10;
                    break;

                case 'C':
                    if (s[i + 1] == 'D') {
                        sum += 400;
                        i++;
                    } else if (s[i + 1] == 'M') {
                        sum += 900;
                        i++;
                    } else sum += 100;
                    break;

                default: sum += map[s[i]];
            }
        }
        return sum;
    }
};

int main(){
    string s = "DCXXI";
    Solution sol;
    cout << sol.romanToInt(s);
}