#include <iostream>
using namespace std;

int main() {

    char s[20];
    cout << "Enter Name: ";
    cin.getline(s,20);
    cout << s << endl;
   // cin.ignore();
    char str[20];
    cout << "Enter Name: ";
    cin.getline(str,20);
    cout << str;

    return 0;
}