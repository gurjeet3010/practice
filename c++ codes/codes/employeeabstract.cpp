#include <iostream>
using namespace std;
class employee
{
    int emp_id;

public:
    virtual void show() = 0;
    int geet_id(int a)
    {
        emp_id = a;
        cout << emp_id;
    }
};
int main()
{
    employee e1;
    e1.get_id(10);
    return 0;
}
