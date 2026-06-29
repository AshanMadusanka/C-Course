#include <iostream>

using namespace std;
class Employee {
    private:
    int employeeId;
    string name;
    int age;
    public:
    Employee();
    Employee(int id, string name, int age);
    Employee(Employee &obj);
    void setEmployeeId(int id);
    void setName(string name);
    void setAge(int age);
    int getEmployeeId();
    string getName();
    int getAge();
    virtual int getWage() =0;
    virtual ~Employee();

    //int getWage();
};

class FullTimeEmployee : public Employee {

    private:
    int salary{};
    public:
    FullTimeEmployee();
    FullTimeEmployee(int salary, string name, int age, int employeeId);
    FullTimeEmployee(FullTimeEmployee &obj);
    void setSalary(int salary);
    int getSalary();
    ~FullTimeEmployee();
};

class PartTimeEmployee : public Employee {
    private:
    int wage;
    public:
    PartTimeEmployee();
    PartTimeEmployee(int wage, string name, int age, int employeeId);
    PartTimeEmployee(PartTimeEmployee &obj);
    void setWage(int wage);
    int getWage();

    ~PartTimeEmployee();
};

int main() {

   // FullTimeEmployee emp{2000,"Ashan",29,23};
    Employee *empptr = new PartTimeEmployee(3000,"Tharindu",30,90);
    cout<< empptr->getWage()<<endl;


    // cout << emp.getSalary() << endl;
    // cout << emp.getName() << endl;
    // emp.setSalary(300);
    // cout << emp.getSalary() << endl;
    // cout << emp.getName() << endl;


    return 0;
}

Employee::Employee() {
    employeeId = 0;
    name = "";
    age = 0;
}

Employee::Employee(int id, string name, int age) {
    employeeId = id;
    this->name = name;
    this->age = age;
}

Employee::Employee(Employee &obj) {
    employeeId = obj.employeeId;
    name = obj.name;
    age = obj.age;
}
void Employee::setEmployeeId(int id) {
    employeeId = id;
}
void Employee::setName(string name) {
    this->name = name;
}
void Employee::setAge(int age) {
    this->age = age;
}
int Employee::getEmployeeId() {
    return employeeId;
}
string Employee::getName() {
    return name;
}
int Employee::getAge() {
    return age;
}

Employee::~Employee() = default;

FullTimeEmployee::FullTimeEmployee() {
    salary = 0;
    //age =10;
}

FullTimeEmployee::FullTimeEmployee(int salary, string name, int age, int employeeId):Employee(employeeId, name, age) {

    this->salary = salary;
}

FullTimeEmployee::FullTimeEmployee(FullTimeEmployee &obj)  : Employee(obj) {
    salary = obj.salary;
}

void FullTimeEmployee::setSalary(int salary) {
    this->salary = salary;
}
int FullTimeEmployee::getSalary() {
    return salary;
}

FullTimeEmployee::~FullTimeEmployee() = default;

PartTimeEmployee::PartTimeEmployee() {
    wage = 0;
}

PartTimeEmployee::PartTimeEmployee(int wage, string name, int age, int employeeId):Employee(employeeId, name, age) {
    this->wage = wage;
}

PartTimeEmployee::PartTimeEmployee(PartTimeEmployee &obj):Employee(obj) {
    wage = obj.wage;
}
void PartTimeEmployee::setWage(int wage) {
    this->wage = wage;
}
int PartTimeEmployee::getWage() {
    return wage;
}

PartTimeEmployee::~PartTimeEmployee()= default; // = default -> Tells the compiler to generate default implementation for this by yourself
