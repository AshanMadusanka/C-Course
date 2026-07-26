#include <iostream>

using namespace std;

#define PI 3.1425


#ifndef PI
    #define PI 4
#endif


#define max(x,y) (x>y?x:y)

#define msg(x) #x
int main() {

    cout<<PI<<endl;

    cout<<max(4,6)<<endl;

    cout<<msg(Ashan);

    return 0;
}