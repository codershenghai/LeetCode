#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {

        if (x == 0) return 0;
        if (x == 1) return 1;

        int half = x / 2;
        while (x/half < half){
            half /= 2;
        }
        if (x/half == half) return half;

        for (int i=half; i <= half*2+1; i++){
            if (x/i < i) return (i-1);
        }

        return -1;
    }
};

int main(){
    Solution sol;
    cout << sol.mySqrt(100);
}