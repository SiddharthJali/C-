// The capability of a class to derive properties and characteristics from another class is called Inheritance.

#include <iostream>
using namespace std;

class AbstractEmployee
{
	virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
	string Company;
	int Age;

	// we use protected when we want to use these in their child / derived classes
protected:
	string Name;

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

class Developer : public Employee
{
public:
	string FavProLang;
	Developer(string name, string company, int age, string favProLang) : Employee(name, company, age)
	{
		FavProLang = favProLang;
	}
	void FixBug()
	{
		// cout << getName() << "'s favProLang is: " << FavProLang << endl;     // this getName is public
		cout << Name << "'s favProLang is: " << FavProLang << endl; // this Name is protected so we can use it in derived class
	}
};

class Teacher : public Employee
{
public:
	string Subject;
	Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
	{
		Subject = subject;
	}
	void PrepareLesson()
	{
		cout << Name << " is preparing for " << Subject << endl;
	}
};

int main()
{

	Developer dev1 = Developer("John", "Google", 31, "Python");
	dev1.FixBug();
	dev1.AskForPromotion();

	Teacher tech1 = Teacher("Jimmy", "My School", 42, "Maths");
	tech1.PrepareLesson();
	tech1.AskForPromotion();

	return 0;
}