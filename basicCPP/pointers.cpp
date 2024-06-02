#include<iostream>
using namespace std;

int main(){

    // pointer is a variable which stores the memory address of another variable
    int age = 21;
    cout << &age <<"\n"; //memory address(hexadecimal) where age variable is stored

    int *pAge = &age;
    cout << *pAge <<"\n";
    
    return 0;

}