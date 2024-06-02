#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    string major;
    double gpa;

    // constructor
    Student(string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }

    // object function
    bool hasHonors() {
        if(gpa >= 7.0){
            return true;
        }
        return false;
    }

};

int main(){

    Student student1("Jim", "CSE", 8.3);
    Student student2("Bob", "Mech", 6.9);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}