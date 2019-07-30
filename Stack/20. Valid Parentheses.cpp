#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> map;
        map[')'] = '(', map[']'] = '[', map['}'] = '{';
        for (char i : s){
            if (stack.size() == 0 || stack.top() != map[i])
                stack.push(i);
            else
                stack.pop();
        }
        return stack.size() == 0 ? true : false;
    }
};


int main(){
    string s = "{[]}";
    Solution *sol = new Solution();
    cout << sol->isValid(s);
}