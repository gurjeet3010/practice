#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

class library
{
public:
    string user_name;
    string father_name;
    string mother_name;

    library()
    {
        cout << "*************************************************************************************************************\n";
        cout << "\t\t\t|| WELCOME TO LIBRARY MANAGEMENT SYSTEM ||\n";
        cout << "*************************************************************************************************************\n";
    }

    void register_user()
    {
        cout << "...Enter user details...\n";
        cout << "Enter user's name:\n";
        cin.ignore();
        getline(cin, user_name);
        cout << "Enter father's name:\n";
        getline(cin, father_name);
        cout << "Enter mother's name:\n";
        getline(cin, mother_name);
        cout << "...User details updated...\n";
    }
};

class book
{
public:
    int book_id;
    string book_name;
    string author_name;
};

class library_db : public library
{
public:
    vector<book> books;

    void list_of_books()
    {
        cout << "List of books are...\n";
        for (int i = 0; i < books.size(); i++)
        {
            cout << "Details for book number " << i + 1 << "...\n";
            cout << "Book id: " << books[i].book_id << endl;
            cout << "Book name: " << books[i].book_name << endl;
            cout << "Authors name: " << books[i].author_name << endl;
        }
    }

    void update_book()
    {
        int bookIdToUpdate;
        cout << "Enter the book id to update: ";
        cin >> bookIdToUpdate;

        for (int i = 0; i < books.size(); i++)
        {
            if (bookIdToUpdate == books[i].book_id)
            {
                cout << "Enter updated book name: ";
                cin.ignore();
                getline(cin, books[i].book_name);

                cout << "Enter updated author's name: ";
                getline(cin, books[i].author_name);

                cout << "Book details updated.\n";
                return;
            }
        }

        cout << "Book not found with the given id.\n";
    }
};

class book_borrower : public library_db
{
public:
    void borrow_book()
    {
        int bookIdToBorrow;
        cout << "Enter book id to borrow: ";
        cin >> bookIdToBorrow;

        for (int i = 0; i < books.size(); i++)
        {
            if (bookIdToBorrow == books[i].book_id)
            {
                cout << "Book borrowed by " << user_name << endl;
                return;
            }
        }

        cout << "Book not found with the given id.\n";
    }
};

int main()
{
    //library_db l;
    book_borrower b;

    // Directly proceed to registering user details
    b.register_user();

    int input = 0;

    while (input != 5)
    {
        cout << "Enter 1 to input book details" << endl;
        cout << "Enter 2 to view list of books" << endl;
        cout << "Enter 3 to update book details" << endl;
        cout << "Enter 4 to borrow book" << endl;
        cout << "Enter 5 to exit" << endl;
        cin >> input;

        switch (input)
        {
        case 1:
            b.update_book();
            break;
        case 2:
            b.list_of_books();
            break;
        case 4:
            b.borrow_book();
            break;
        default:
            exit(0);
        }
    }

    return 0;
}
