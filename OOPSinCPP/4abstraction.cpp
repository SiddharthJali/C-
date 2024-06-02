// Abstraction means displaying only essential information and hiding the details.
// Data abstraction refers to providing only essential information about the data to the outside world,
// hiding the background details or implementation.

#include <iostream>
using namespace std;

class AbstractEmployee
{
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
	string Name;
	string Company;
	int Age;

public:
	void setName(string name) // setter
	{
		Name = name;
	}
	string getName() // getter
	{
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

	void AskForPromotion()
	{
		if (Age >= 30)
			cout << "\n"
				 << Name << " got promoted!\n";
		else
			cout << "\n"
				 << Name << " no promotion\n";
	}
};

int main()
{

	Employee emp1 = Employee("ABC", "Google", 69);
	Employee emp2 = Employee("XYZ", "Meta", 25);

	emp1.AskForPromotion();
	emp2.AskForPromotion();

	return 0;
}