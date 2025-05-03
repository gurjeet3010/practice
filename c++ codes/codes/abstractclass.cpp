#include <iostream>
using namespace std;
class student
{
    int marks;

public:
    virtual void display() = 0;
};
class AIML : public student
{
    int branch_id;

public:
    void display()
    {
        cout << " AIML students " << endl;
    }
};

int main()
{
    AIML AL;
    AL.display();
    return 0;
}
