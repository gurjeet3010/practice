#include<iostream>
#include<string.h>
using namespace std;

class student
{
    public:
    string name;
    int rollno;
    student()
    {
        cout<<"Enter students name: \n";
        cin>>name;
        cout<<"Enter students roll number: \n";
        cin>>rollno;
    }
};

class test : public student
{
    public:
    float sub1;
    float sub2;
    void getmarks()
    {
        cout<<"Enter marks scored in English: \n";
        cin>>sub1;
        cout<<"Enter marks scored in Mathematics: \n";
        cin>>sub2;
    }
    void putmarks()
    {
        cout<<"Marks scored in English = "<<sub1<<endl;
        cout<<"Marks scored in Mathematics = "<<sub2<<endl;
    }
};

class result : public test
{
    public:
    float sum;
    /*void calculation()
    {
        sum = sub1 + sub2;
    }
    */
    void display()
    {
        cout<<"Total marks scored by "<<name<<" are "<< sub1 + sub2;
    }
};

int main()
{
    result r;
    r.getmarks();
    r.putmarks();
    //r.calculation();
    r.display();
    return 0;
}