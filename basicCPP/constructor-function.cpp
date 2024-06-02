// contructor is a special function that calls whenever we create an object of class



#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }

};

int main(){

    // Book book1;
    // book1.title = "Harry Potter";
    // book1.author = "J K Rowlings";
    // book1.pages = 600;
    
    // instead of writing like that, we can call the speacial function called constructor
    Book book1("Harry Potter", "J K Rowlings", 600);
    Book book2("DSA", "Girrafe Academy", 999);

    cout << book1.title << endl;

    return 0;
}