#include<iostream>
#include<string.h>
using namespace std;
class developer
{
    string name;
    public:
    developer()
    {
        cout<<"Developer is base class\n";
    }
    void display()
    {
        cout<<"Enter the name of developer\n";
        cin>>name;
        cout<<"Developer's name:\n"<<name;
    }
};
class webdeveloper : public developer{
    public:
    webdeveloper()
    {
        cout<<"It is sub class of developers\n";
    }
};
class android : public developer
{
    public:
    android()
    {
        cout<<"It is also sub class of developer\n";
    }
};
int main()
{
    android a;
    a.display();
    webdeveloper w;
    w.display();
    return 0;
}