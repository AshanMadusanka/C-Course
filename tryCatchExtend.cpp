#include <iostream>

using namespace std;

int main() {

    try {

        throw string("Ashan");
    }
    catch (int x) {
        cout<<"Int"<<endl;
    }
    catch (string c) {
        cout<<"String "<<c<<endl;
    }
    catch (...) {
        cout<<"ALl"<<endl;

    }

    return 0;
}