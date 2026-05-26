#include <cstring>
#include <iostream>

using namespace std;

int main() {

    char s[100];                // This is character array
    char *p = "Ashan Madusanka";// This is charactor pointer

    strncpy(s, p,5);
    cout << s << endl;

    return 0;
}