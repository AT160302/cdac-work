
#include <iostream>
using namespace std;

// Base Class
class Human
{
protected:
    string name;
    string gender;

public:
    Human(string name, string gender)
    {
        this->name = name;
        this->gender = gender;
    }
};

// Derived Class
class Student : public Human
{
protected:
    string degree;

public:
    Student(string name, string gender, string degree)
        : Human(name, gender)
    {
        this->degree = degree;
    }
};

// Derived Class
class Employee : public Student
{
private:
    double salary;

public:
    Employee(string name, string gender, string degree, double salary)
        : Student(name, gender, degree)
    {
        this->salary = salary;
    }

    void display()
    {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Name    : " << name << endl;
        cout << "Gender  : " << gender << endl;
        cout << "Degree  : " << degree << endl;
        cout << "Salary  : " << salary << endl;
    }
};

int main()
{
    Employee e("Rahul", "Male", "BTech", 65000);

    e.display();

    return 0;
}

