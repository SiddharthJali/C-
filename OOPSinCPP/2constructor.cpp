// Constructor is a special method that is invoked automatically at the time of object creation.
// It is used to initialize the data members of new objects generally.

// Access Modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.
// Access Modifiers or Access Specifiers in a class are used to assign the accessibility to the class members, i.e.,
// they set some restrictions on the class members so that they can’t be directly accessed by the outside functions.

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

    // Contructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{

    Employee emp1 = Employee("ABC", "Google", 69);
    emp1.myDetails();

    Employee emp2 = Employee("XYZ", "Meta", 68);
    emp1.myDetails();

    return 0;
}