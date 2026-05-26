#include <cstring>
#include <iostream>
using namespace std;

int main() {

    char s[20] = "Hello C++++ ";
    char *s2 = "World";
    s2 = "Ashan";
    s[2]='d';

    strncat(s,s2,3);

    cout << s << endl;


    return 0;
}

