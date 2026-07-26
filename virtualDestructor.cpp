#include <iostream>

using namespace std;

class Base {

public:
    Base() {
        // Constructors run from Base -> Derived (top-down)
        cout<<"Base class constructor"<<endl;
    }

    // 'virtual' destructor: ensures the correct destructor chain is called
    // when deleting a derived object through a Base pointer.
    virtual ~Base() {

        cout<<"Base class destructor"<<endl;
    }
};

class Derive : public Base {

public:

    Derive() {

        cout<<"Derive class constructor"<<endl;
    }

    // Destructors run from Derived -> Base (bottom-up), the reverse of construction
    ~Derive() {
        cout<<"Derive class destructor"<<endl;
    }

};

int main() {

   // Derive d;

    cout<<"==================="<<endl;

    // Base pointer holding a Derived object (upcasting)
    Base *ptr = new Derive();

    // Because ~Base() is virtual, 'delete' calls ~Derive() first, then ~Base().
    // If ~Base() were NOT virtual, only ~Base() would run -> Derived part leaks (undefined behavior).
    delete ptr;

    return 0;
}

/*
 * ===================== CONCLUSION =====================
 * 1. Construction order: Base constructor runs first, then Derived.
 * 2. Destruction order: reverse -> Derived destructor first, then Base.
 * 3. When deleting a derived object via a Base* pointer, the base class
 *    destructor MUST be declared 'virtual'. Otherwise only the base
 *    destructor runs, the derived part is never cleaned up (resource leak
 *    / undefined behavior).
 * 4. Rule of thumb: if a class is meant to be a base class (has virtual
 *    functions / is inherited from), give it a virtual destructor.
 * ======================================================
 */