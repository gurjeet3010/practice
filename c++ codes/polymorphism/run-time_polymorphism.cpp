#include<iostream>
#include<string.h>
using namespace std;
class media
{
    protected:
    char title[55];
    float price;
    public:
    media(char*s, float a)
    {
        strcpy(title, s);
        price = a;
    }  
    virtual void display(){} //empty virtual function
};
class book : public media
{
    int pages;
    public:
    book(char*s, float a, int p) : media(s, a)
    {
        pages = p;
    }
    void display();
};
class tape : public media{
    float time;
    public:
    tape(char*s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display();
};
void book ::display()
{
    cout<<"\n Title: "<<title;
    cout<<"\nPages: "<<pages;
    cout<<"\nPrice: "<<price;
}
void tape :: display()
{
    cout<<"\nTitle: "<<title;
    cout<<"\nplay time: "<<time<<"mins";
    cout<<"\n price: "<<price;
}
int main()
{
    char *title = new char[30];
    float price, time;
    int pages;
    //book details
    cout<<"Enter book details: \n";
    cout<<"title: ";
    cin>>title;
    cout<<"price: ";
    cin>>price;
    cout<<"pages: ";
    cin>>pages;
    book book1(title, price, pages);
    // tape details
    cout<<"\n Enter tape details:\n";
    cout<<"Title: ";
    cin>>title;
    cout<<"price: ";
    cin>>price;
    cout<<"play time(mins): ";
    cin>>time;
    tape tape1(title, price, time);
    media*list[2];
    list[0] = &book1;
    list[1] = &tape1;
    cout<<"\nMedia details:";
    cout<<"\nbook:";
    list[0]->display();
    cout<<"\ntape";
    list[1]-> display();
    //result(0);
    return 0;
}
