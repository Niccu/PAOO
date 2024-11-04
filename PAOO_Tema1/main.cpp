#include <iostream>
#include "Book.h"

using namespace std;

void display(Book book)
{
    book.display();
}

int main()
{
    Book book("Lord of the Rings Return of the King", "J.R.R.Tolkien", 416);
    book.display();

    Book book2 = book;
    book2.display();

    Book book3 = move(book);
    book3.display();
    return 0;
}
