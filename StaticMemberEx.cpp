#include <iostream>

using namespace std;

class Student {
    public:
    string name;
    int studentID;

    static int count;
    Student(string n) {
        count++;
        name = n;
        studentID = count;

    }

    static int getStudentID() {
        return count;
    }

    void display() {
        cout<<name<<"== "<< studentID<<endl;
    }
};

int Student::count = 0;

int main() {

    Student std1("Ashan");
    Student std2("Madu");
    Student std3("Nishan");

    std1.display();
    std2.display();

    cout<<Student::getStudentID()<<endl;
    cout<<Student::count<<endl;


    return 0;
}