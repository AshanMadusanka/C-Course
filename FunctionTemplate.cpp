#include <iostream>

using namespace std;

template<typename T> T Max(T x, T y) {
    return x > y ? x : y;
}
int main() {

    cout << Max(1, 2) << endl;
    cout << Max(3.7, 4.1) << endl;
    cout << Max("Ashan", "Madusanka") << endl;

    return 0;
}