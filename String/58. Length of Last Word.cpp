#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream input(s);
        string tmp, res;
        while (getline(input, tmp, ' '))
            if (tmp.size() != 0)
                res = tmp;
        return res.size();
    }
};

int main(){
    string s = "b a ";
    Solution sol;
    cout << sol.lengthOfLastWord(s);
}