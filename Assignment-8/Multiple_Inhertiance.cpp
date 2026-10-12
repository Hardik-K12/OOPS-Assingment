#include <iostream>
#include <string>
using namespace std;

// Base class to store basic employee information
class BasicInfo
{
private:
    string name;
    int age;

public:
    // Function to accept basic information
    void acceptBasicInfo()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }

    // Function to display basic information
    void dispBasicInfo()
    {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Base class to store department information
class DeptInfo
{
private:
    string nameOfDept;
    string natureOfWork;

public:
    // Function to accept department information
    void acceptDeptInfo()
    {
        cout << "Enter department: ";
        cin >> nameOfDept;

        cout << "Enter nature of work: ";
        cin >> natureOfWork;
    }

    // Function to display department information
    void dispDeptInfo()
    {
        cout << "Department: " << nameOfDept << endl;
        cout << "Nature of work: " << natureOfWork << endl;
    }
};

// Derived class inheriting from both BasicInfo and DeptInfo
class Employee : public BasicInfo, public DeptInfo
{
public:
    // Function to accept all employee information
    void acceptEmployeeInfo()
    {
        acceptBasicInfo();
        acceptDeptInfo();
    }

    // Function to display all employee information
    void dispEmployeeInfo()
    {
        cout << "\n--- Employee Information ---" << endl;

        dispBasicInfo();
        dispDeptInfo();
    }
};

int main()
{
    // Create an object of the Employee class
    Employee e1;

    // Accept and display employee information
    e1.acceptEmployeeInfo();
    e1.dispEmployeeInfo();

    return 0;
}
