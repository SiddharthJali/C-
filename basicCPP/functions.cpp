#include <iostream>
using namespace std;
void sayHi(string name, int age)
{
    cout << "\nHello " << name << " you are " << age;
    // printf("Hello %s" + name + "You are " + age);
}
int main()
{
    sayHi("Sid", 21);
    sayHi("Bob", 24);
    return 0;
}
