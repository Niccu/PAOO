#include <iostream>

using namespace std;

class Book
{
    private:
    string title = "\0";
    string author = "\0";
    int *pages = 0;
    Book(const Book *other);
    Book &operator =(const Book&);

    public:
     Book(const string &title, const string &author, int pages)
     :title(title), 
     author(author), 
     pages(new int(pages)){}

     ~Book()
     {
        delete pages;
     }
     void display() const
    {
        cout<<"Title: "<< title << endl << "Author: " << author << endl << "No. pages: " << *pages << endl;
    }
};

int main()
{
    Book book1("1984", "George Orwell", 234);
    book1.display();
    Book book2 = book1;
    book2.display();
    return 0;
}
