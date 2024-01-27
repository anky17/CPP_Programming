/*You are working on a library management system. Your task is to implement two classes, Book and Library, such that the library’s member
function becomes a friend function of Book. Class Book represents a book in the library. It has private data members for the book's title,
author, and book ID. Class Library represents the library itself. It has an array to store Book objects and a member function called
'displayBookDetails' that takes a Book object as input and displays its details. Your task is to implement the classes and their member functions
so that 'displayBookDetails' in Library becomes a friend function of Book, allowing it to access the private data members of the Book and display
its details.*/

#include <iostream>
#include <string>
using namespace std;
class Book
{
private:
    string title;
    string author;
    int bookID;

public:
    Book()
    {
    }

    // Parameterized Constructor
    Book(string title, string author, int bookID)
    {
        this->title = title;
        this->author = author;
        this->bookID = bookID;
    }

    // Friend function declaration
    friend void displayBookDetails(Book book);
};

class Library
{
private:
    Book books[100];
    int numBooks;

public:

    // Default Constructor
    Library()
    {
        numBooks = 0;
    }

    // Function to add a book to the library
    void addBook(Book book)
    {
        books[numBooks] = book;
        numBooks++;
    }

    // Friend function declaration
    friend void displayBookDetails(Book book);
};

// Friend function definition
void displayBookDetails(Book book)
{
    cout << "Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Book ID: " << book.bookID << endl;
}

int main()
{
    // Create a Book object
    Book book1("How to kill a mocking bird", "Harper Lee", 1981);

    // Create a Library object
    Library library;

    // Add the book to the library
    library.addBook(book1);

    // Display the book details using the friend function
    displayBookDetails(book1);

    return 0;
}