// Encapsulation is defined as wrapping up data and information under a single unit.
// Encapsulation is defined as binding together the data and the functions that manipulate them.

#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    { // setter
        Name = name;
    }
    string getName()
    { // getter
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge(int age)
    {
        if (age >= 18)
            Age = age;
    }
    int getAge()
    {
        return Age;
    }

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

    emp1.setAge(20);
    cout << "\n\nSorry, " << emp1.getName() << " is " << emp1.getAge() << " years old\n";

    return 0;
}