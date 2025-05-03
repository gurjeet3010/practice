#include<iostream>
using namespace std;
class student
{
    int rollno;
    int marks;
    int overall_marks;
    public:
    void get_id(int a)
    {
        rollno=a;
    }
    void put_id()
    {
        cout<<"Roll no:";
    }
    void get_marks(int a)
    {
        marks=a;
    }
    void get_marks(int IPS,int oopm)
    {
        overall_marks=IPS+oopm;
    }
    void put_marks()
    {
        cout<<marks<<endl;
        cout<<overall_marks<<endl;
    }
};
int main()
{
    student s1;
    s1.get_marks(75);
    s1.get_marks(50,75);
    s1.put_marks();
}