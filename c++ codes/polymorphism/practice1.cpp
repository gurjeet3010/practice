#include<iostream>
using namespace std;

class P
{
    public:
    int x;
    int y;
    void get_xy()
    {
        cout <<"Enter values of x and y: ";
        cin >> x >> y;
    }
    int get_x()
    {
        return x;
    }
};

class Q : private P{
    public:
    int z;
    void mul()
    {
        get_xy();
        z = get_x() * y;
    }
    void display()
    {
        cout<<"X = "<< x << "\n";
        cout<<"Y = "<< y << "\n";
        cout<<"Z = "<< z << "\n";
    }
};

int main()
{
    Q q;
    //q.get_xy();         would not work
    q.mul();
    q.display();
    return 0;
}