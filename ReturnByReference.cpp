#include <iostream>

using namespace std;

// This function receives x by reference, so x becomes another name for the
// original variable passed from main().
int &func(int &x) {

    // Returns x by reference.
    // This means the caller gets access to the original variable, not a copy.
    return x;
}
int main() {

    // Create an integer variable named a and store 5 in it.
    int a = 5;

    // func(a) returns a reference to a.
    // Because it returns a reference, we can assign a new value through it.
    // This changes the original variable a from 5 to 25.
    func(a) = 25;

/**
    func(a) refers directly to a. That means this line:
    func(a) = 25;
    is basically like writing:
    a = 25;
*/

    // Prints the updated value of a.
    // Output: 25
    cout << a;

    // Ends the program successfully.
    return 0;
}
