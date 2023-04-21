#include <iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        Book(){
            title = "no title";
            author = "no author";
            pages = 0;
        }
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main(){
    Book bookObject("Harry Potter", "JK Rowling", 500);
    Book bookObject2("Lord of the Rings", "Tolkien", 700);
    Book bookObject3;

    cout << bookObject.pages << endl;

    cout << bookObject3.title << endl;

    return 0;
}