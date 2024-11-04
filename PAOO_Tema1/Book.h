#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book
{
    private:
        string title;
        string author;
        int *pages;
    
    public:
        //Constructor
        Book(const string &title, const string &author, int pages);

        //Copy Constructor
        Book(const Book &other);

        //Move Constructor
        Book(Book &&other) noexcept;

        //Destructor
        ~Book();

        //Display
        void display() const;
};

#endif