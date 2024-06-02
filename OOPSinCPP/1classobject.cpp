// A class is a user-defined data type, which holds its own data members and member functions,
// which can be accessed and used by creating an instance of that class.
// A class is like a blueprint for an object.

// An Object is an identifiable entity with some characteristics and behavior.
// An Object is an instance of a Class.

#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void myDetails()
    {
        cout << "\nName: " << Name;
        cout << "\nCompany: " << Company;
        cout << "\nAge: " << Age;
    }
};

int main()
{

    // Employee is the class and emp1 is the object
    Employee emp1;
    emp1.Name = "ABC";
    emp1.Company = "Google";
    emp1.Age = 69;

    Employee emp2;
    emp2.Name = "XYZ";
    emp2.Company = "Meta";
    emp2.Age = 68;

    emp1.myDetails();
    emp2.myDetails();

    return 0;
}