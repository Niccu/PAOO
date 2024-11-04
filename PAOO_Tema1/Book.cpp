#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(const string &title, const string &author, int pages)
{
    this->title = title; 
    this->author = author;
    this->pages = new int(pages);
}

Book::Book(const Book &other)
{
    title = other.title;
    author = other.author;
    pages = new int(*other.pages);
    cout << "---Copy constructor called---" << endl;
}

Book::Book(Book &&other) noexcept
{
    title = move(other.title);

    author = move(other.author);

    pages = other.pages;
    other.pages = nullptr;

    cout<<"---Move constructor called---" << endl;
}

Book::~Book()
{
    cout << "Destructor called for:" << title << endl;
    delete pages;
}
void Book::display() const
{
    cout<<"Title: "<< title << endl << "Author: " << author << endl << "No. pages: " << *pages << endl;
}