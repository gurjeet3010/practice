#include<iostream>
using namespace std;

class mammals
{
    public:
    void show(){
    cout<<"I am Mammal"<<endl;
    }
};

class marineanimals
{
    public:
    void display(){
    cout<<"I am a marine animal"<<endl;
    }
};

class bluewhale : public mammals, public marineanimals
{
    public:
    void print(){
    cout<<"I belong to both the categories: mammals as well as marine animals"<<endl;
    }
};
int main()
{   
    cout<<"Function of mammals by the object of mammals:\n";
    mammals m;
    m.show();
    cout<<"Function of marine animals by the object of marine animals:\n";
    marineanimals a;
    a.display();
    cout<<"Function of bluewhale by the object of blue whale:\n";
    bluewhale b;
    b.print();
    cout<<"Function of each of its parent by the object of bluewhale:\n";
    b.mammals::show();
    b.marineanimals::display();
    return 0;
}