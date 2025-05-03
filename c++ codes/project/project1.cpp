#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

struct Book{
    int bookID;

};  

class book
{
    public:
    int bookID;
    char book_title[100];
    char authorname[50];
    char publisher[50];
    int availability;
    struct bookcount

    void addbook()
    {
        int n;

        cout << "...Enter details of the book...\n";
        cout << "How many book details you want to enter? ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << "Enter book name: ";
            cin >> book_title;
            cout << "Enter book ID: ";
            cin >> bookID;
            cout << "Enter the name of author: ";
            cin >> authorname;
            cout << "Enter publishers name: ";
            cin >> publisher;
            cout << "Book available for how many days? ";
            cin >> availability; 
        }
    }

    void deletebook()
    {
        int ID;
        if(bookcount == 0){
            cout << "No books to delete.\n";
            return;
        }
        cout << "Enter th bookID to delete: ";
        cin >> ID;

        if(ID == bookID){
        }
    }
};

class user{};
class librarian : private user{};
class member : private user{};
class transaction{}; 

int main()
{
    int choice;
        cout << "Enter a number according to your requirement:- \n";
        cout << "1. Add a new book\n";
        cout << "2. Delete a book\n";
        cout << "3. Search a book\n";
        cout << "4. Check book availability\n";
        cin >> choice;

        switch(choice)
        {
            case 1:
            book b;
            b.addbook();
            break;

            case 2:
            book b;
            b.deletebook();
            break;
        }
}