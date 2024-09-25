// The word polymorphism means having many forms.
// In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form.
// The same method or function can work on objects of different classes.

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

	// virtual creates a virtual function, it only runs when there is no function with same name in it's child class
	virtual void Work()
	{
		cout << Name << " is checking email and writing letters..." << endl;
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
	void Work()
	{
		cout << Name << " is coding in " << FavProLang << endl;
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
	void Work()
	{
		cout << Name << "is teaching " << Subject << endl;
	}
};

int main()
{

	Developer dev1 = Developer("John", "Google", 31, "Python");
	Teacher tech1 = Teacher("Jimmy", "My School", 42, "Maths");

	// class = derived class
	Employee *e1 = &dev1;
	Employee *e2 = &tech1;

	// when we are calling a function from derived class then access specifier(.) becomes arrow(->)
	e1->Work();
	e2->Work();

	return 0;
}
