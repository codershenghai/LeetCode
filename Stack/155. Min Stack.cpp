#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> data;
    stack<int> minstack;

    MinStack() {

    }

    void push(int x) {
        data.push(x);
        if (minstack.empty() || x <= minstack.top())
            minstack.push(x);
    }

    void pop() {
        if (data.top() == minstack.top())
            minstack.pop();
        data.pop();
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main(){
    MinStack *obj = new MinStack();
    obj->push(-2);
    obj->push(0);
    obj->push(-3);
    cout << obj->getMin() << endl;
    obj->pop();
    cout << obj->top() << endl;
    cout << obj->getMin() << endl;
}