#include <iostream>
using namespace std;
int main()
{
	string name = "Siddharth Jali";
	cout << "length is: " << name.length() << endl;
	cout << "0th index of string: " << name[0] << endl;
	cout << "find index of id in string: " << name.find("id", 0) << endl;
	cout << "substring: " << name.substr(0, 2) << endl;
	name[0] = 'D';
	cout << "change index: " << name << endl;
}
