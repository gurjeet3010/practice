#include<iostream>
using namespace std;

class student
{
    public:
    
    virtual void display()
    {
        cout<<"student class is called..."<<endl;
    }
};

class marks : public student
{
    public:
    void display()
    {
        cout<<"Marks class is called..."<<endl;
    }
};

int main()
{
    student *s = new marks();
    s->display();
    return 0;
}

/*
class animal{
    public:
    virtual void speak(){
        cout<<"Aminal called"<<endl;
    }
};

class dog : public animal
{
    public:
    void speak()
    {
        cout<<"dog barking"<<endl;
    }
};

int main(){
    animal *obj = new dog();
    obj -> speak();
    return 0;
}
*/