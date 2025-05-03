#include <iostream>
using namespace std;
class employee
{
public:
    int emp_id;
    char name;
    void getdata()
    {
        cout << "Enter employee id:";
        cin >> emp_id;
        cout << "Enter name of employee:";
        cin >> name;
    }
};
class department : public employee
{
public:
    char dep_name;
    void showdata()
    {
        cout << "Enter department name:";
        cin >> dep_name;
    }
    void display()
    {
        cout << "Department:" << dep_name << endl;
    }
};
int main()
{
    department d1;
    d1.getdata();
    d1.showdata();
    d1.display();
    return 0;
}