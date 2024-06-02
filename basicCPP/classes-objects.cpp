// class is creating a new type of data which we can use in our programs
// class is a blueprint/specification and object is the instance of that class

#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
};

int main(){

    Book book1;
    book1.title = "Harry Potter";
    book1.author = "J K Rowlings";
    book1.pages = 600;

    Book book2;
    book2.title = "DSA";
    book2.author = "Giraffe Academy";
    book2.pages = 999;

    cout << book2.title << endl;

    return 0;
}