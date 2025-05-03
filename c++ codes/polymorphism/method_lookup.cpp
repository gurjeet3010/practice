#include<iostream>
using namespace std;

/* the process of determining which method definition a method signature denotes during run time, based on the type of the object */

class base{
    public:
    void display(){
        cout<<"Display base\n";
    }
    virtual void show(){
        cout<<"Show base\n";
    }
};

class derive : public base{
    public:
    void display(){
        cout<<"Display derived\n";
    }
    void show(){
        cout<<"Show derived\n";
    }
};

int main()
{
    base b;
    derive d;
    base *bptr;
    cout<<"bptr points to base\n";
    bptr = &b;              //pointing bptr to object of base class
    bptr -> display();              //calls base version
    bptr -> show();                 //calls base version
    cout<<"\n\nbptr points to derived \n";
    bptr = &d;                      //pointing bptr to object of derive class
    bptr -> display();              //calls base version
    bptr -> show();                 //calls derived version
    return 0;
}