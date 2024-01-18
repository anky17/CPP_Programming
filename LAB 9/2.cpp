/*
2. You are working on a library management system. Your task is to
implement two classes, Book and Library, such that the library’s member
function becomes a friend function of Book. Class Book represents a book
in the library. It has private data members for the book's title, author, and
book ID. Class Library represents the library itself. It has an array to store
Book objects and a member function called 'displayBookDetails' that takes
a Book object as input and displays its details.
Your task is to implement the classes and their member functions so that
'displayBookDetails' in Library becomes a friend function of Book,
allowing it to access the private data members of the Book and display its
details.
*/

#include <iostream>
#include <string>

using namespace std;

// Forward declaration of Book class
class Book;

class Library
{
public:
    static const int MaxBooks = 100; // Maximum number of books
    Book *books[MaxBooks];           // Array of pointers to Book objects
    int numBooks = 0;                // Present Number of books currently stored in the library

    Library()
    {
    }

    void displayBookDetails(const Book &book); // Member function to display book details

    // Member function to add a book to the library,takes a pointer to a Book object as its parameter.
    void addBook(Book *book)
    {
        if (numBooks < MaxBooks)
        {
            /*
            It accesses the books array at the index specified by numBooks. This array holds pointers to Book objects.
            assigns the memory address of the Book object
            After adding the book, it increments the numBooks count
            */
            books[numBooks++] = book;
        }
        else
        {
            cout << "Library is full. Cannot add more books." << endl;
        }
    }
};

class Book
{
private:
    string title;
    string author;
    int bookId;

public:
    Book(const string &t, const string &a, int id)
    {
        title = t;
        author = a;
        bookId = id;
    }

    friend void Library::displayBookDetails(const Book &book); // declare friend function
};

void Library::displayBookDetails(const Book &book)
{
    cout << "Book Title: " << book.title << endl;
    cout << "Author: " << book.author << endl;
    cout << "Book ID: " << book.bookId << endl;
}

int main()
{
    Library library;

    Book book1("2001: A Space Odyssey", "Arthur C. Clarke", 45);
    Book book2("The Pilgrimage", "Paulo Coelho", 101);

    // call addBook function to add books to the library, with a pointer to book object as argument.
    library.addBook(&book1);
    library.addBook(&book2);

    // Call the friend function to display book details
    cout << "Book Details:" << endl;
    for (int i = 0; i < library.numBooks; i++)
    {
        // books holds pointers to the Book objects that have been added to the library.
        // call the displayBookDetails function, which is a friend function of the Book class. expects a Book object as its argument.
        // using *library.books[i], the actual Book object is passed to this function instead of the pointer
        library.displayBookDetails(*library.books[i]);
        cout << endl;
    }

    return 0;
}
