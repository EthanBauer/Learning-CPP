#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main(){

    Book bookObject;
        bookObject.title = "Harry Potter";
        bookObject.author = "JK Rowling";
        bookObject.pages = 500;   

    cout << bookObject.title << endl; 

    Book bookObject2;
        bookObject2.title = "Lord of the Rings";
        bookObject2.author = "Tolkien";
        bookObject2.pages = 700;

    cout << bookObject2.pages << endl;

    return 0;
}