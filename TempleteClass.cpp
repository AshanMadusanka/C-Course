#include <iostream>

using namespace std;

template <class T>
class Stack {
    private:
    T *stk;
    int size;
    int top;

    public:
    Stack(int sz) {
        top = 0;
        size = sz;
        stk = new T[size];

    }
    void push(T x);
    T pop();
};
template <class T>
void Stack<T>::push(T x) {

    if (size>top) {

        stk[top] = x;
        top++;
    }
    else {

        throw int(3);
    }

}


int main() {

    try {
        Stack<double> st(5);

        st.push(2);
        st.push(2);
        st.push(2);
        st.push(2);
        st.push(2);
        st.push(2);
    }

    catch (int ex) {

        cout<<"Stack Over flow"<<ex<<endl;
    }

    return 0;
}