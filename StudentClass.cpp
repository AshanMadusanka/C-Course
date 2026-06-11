#include <iostream>

using namespace std;



class Student {

    public:

    struct Subjects {
        int science;
        int mathematics;
        int english;
    };

    private:
    int studentID;
    string studentName;
    Subjects subjects{};

    public:
    Student();
    Student(int studentID, const string& studentName, const Subjects& subjects);
    Student(const Student& student);
    void setStudentID(int studentID);
    void setStudentName(const string& studentName);
    void setSubjects(const Subjects& subjects);
    int getStudentID() const;
    string getStudentName() const;
    Subjects getSubjects() const;
    int totalMarks() const;
    void grade() const;

};

Student::Student() {
    studentID = 0;
    studentName = "";
    subjects.science = 0;
    subjects.mathematics = 0;
    subjects.english = 0;
}

Student::Student(int studentID, const string& studentName, const Subjects& subjects) {
    this->studentID = studentID;
    this->studentName = studentName;
    this->subjects = subjects;
}

Student::Student(const Student& student) {
    studentID = student.studentID;
    studentName = student.studentName;
    subjects = student.subjects;
}

void Student::setStudentID(int studentID) {
    this->studentID = studentID;
}
void Student::setStudentName(const string& studentName) {
    this->studentName = studentName;
}
void Student::setSubjects(const Subjects& subjects) {
    this->subjects = subjects;
}
int Student::getStudentID() const {
    return studentID;
}
string Student::getStudentName() const {
    return studentName;
}
Student::Subjects Student::getSubjects() const {
    return subjects;
}

int Student::totalMarks() const {
    return subjects.mathematics + subjects.english + subjects.science;
}

void Student::grade() const {
    int total = totalMarks();
    if (total >= 210) {
        cout << "Student has A grade" << endl;
    }
    else if (total >= 150) {
        cout << "Student has B grade" << endl;
    }
    else if (total >= 120) {
        cout << "Student has C grade" << endl;
    }
    else {
        cout << "Student has D grade" << endl;
    }
}

int main() {

    Student student1;
    student1.setStudentID(1);
    student1.setStudentName("Ashan Madusanka");
    student1.setSubjects({1, 50, 4});
    cout << student1.totalMarks() << endl;
    student1.grade();

    Student student2;
    student2.setStudentID(2);
    student2.setStudentName("Madusanka");
    student2.setSubjects({10, 50, 4});
    cout << student2.totalMarks() << endl;
    student2.grade();

    return 0;
}
