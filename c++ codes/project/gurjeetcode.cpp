#include <iostream>
#include <string>

using namespace std;

class library
{
public:
    string user_name;
    string father_name;
    string author_name;
    string mother_name;
    int user_id;

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
        cin.ignore();
        getline(cin, father_name);
        cout << "Enter mother's name:\n";
        cin.ignore();
        getline(cin, mother_name);
        cout << "...User details updated...\n";
    }
};



class book : public library
{
public:
    int b_id;
    int id;
    char section;
    string book_name;
    int book_id;
    string author_name;
    int nextbookid;
    int count;
   

    void get_book_info()
    {
        cout << "Enter number of books to add:\n";
        cin >> count;
        book books[count];
        for (int i = 1; i <= count; i++)
        {
            cout << "...Enter details for book number " << i << "...\n";
            cout<<"Enter book id:\n";
            cin>>books[i].book_id;
            cout << "Enter book name:\n";
            cin.ignore();                   //clear any character that may be left in the input buffer
            getline(cin, books[i].book_name);
            cout << "Enter author's name:\n";
            cin.ignore();
            getline(cin, books[i].author_name);
            cout << "...Book details are updated...\n";    
        }
    }    

};

class library_db : public book
{
public:

    void book_request()
    {
        cout << "Enter book id to issue:\n";
        cin >> b_id;
        if (b_id==book_id)
        {
            cout<<"Book issued to"<<user_name<<endl;
            return;
        }
        else
        {
            cout<<"Enter valid book id\n";
        }
    }

    void list_of_books()
    {
        cout << "List of books are...\n";
        for (int i = 1; i <= count; i++)
        {
            cout << "Details for book number " << i << "...\n";
            cout << "Book id: " << book_id << endl;
            cout << "Book name: " << books[i].book_name << endl;
            cout << "Authors name: " << books[i].author_name << endl;
        }
    }
};

class book_updater : public library_db
{
public:
    void update_book()
    {
        int bookIdToUpdate;
        cout << "Enter the book id to update: ";
        cin >> bookIdToUpdate;

        if(bookIdToUpdate==books[i].book_id)
        {
            cout << "Enter updated book name: ";
            cin.ignore();
            getline(cin,books[i].book_name);

            cout << "Enter updated author's name: ";
            cin.ignore();
            getline(cin,books[i].author_name);

            cout << "Book details updated.\n";
            return;
        }
        else{
            cout << "Book not found with the given id.\n";
        }
    }    
};

int main()
{
    book_updater l;
    int input = 0;

    // Directly proceed to registering user details
    l.register_user();

    while (input != 4)
    {
        cout << "Enter 1 to input book details" << endl;
        cout << "Enter 2 to view list of books" << endl;
        cout << "Enter 3 to update book details" << endl;
        cout << "Enter 4 to issue book" << endl;
        cout << "Enter 5 to exit" << endl;
        cin >> input;

        switch (input)
        {
        case 1:
            l.get_book_info();
            break;
        case 2:
            l.list_of_books();
            break;
        case 3:
            l.update_book();
            break;
        case 4:
            l.book_request();
            break;
        default:
            exit(0);
        }
    }
    return 0;
} 