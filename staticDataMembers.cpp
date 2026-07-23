#include <iostream>

using namespace std;
class Test {
    private:
    int a;
    int b;
    public:
    static int count;
    Test() {
        a=10;
        b=20;
        count++;
    }

    static int getCount() {
        return count;
    }
};
int Test::count = 0;
int main() {

    Test t;
    Test t1;
    cout<<t1.count<<endl;
    cout<<Test::count<<endl;
    cout<<t.getCount()<<endl;

    return 0;
}