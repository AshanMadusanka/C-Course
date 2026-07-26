#include <iostream>

using namespace std;
class StackOverFlow:exception{};
class StackUnderFlow:exception{};

class Stack {
    private:
    int *stk;
    int size;
    int top = -1;
    public:
    Stack(int sz) {

        size = sz;
        stk = new int[size];
    }
    void add(int x) {

        if (top == size-1) {
             throw StackOverFlow();
        }
        top++;
        stk[top] = x;
    }

    int sub(int x) {

        if (top == -1) {
            throw StackUnderFlow();
        }
        return stk[top--];
    }
};

int main() {

    Stack s(5);

    try {
        s.add(10);
        s.add(20);
        s.add(30);
        s.add(40);
        s.add(50);
        s.add(60);
    }
    catch (StackOverFlow&) {
        cout <<"Stack OverFlow"<<endl;
    }
    return 0;
}