#include<iostream>
using namespace std;

int num_fruits = 0;

class fruit{
    protected:
    int num_fruits;
    public:
    void setnumfruits(int num){
        num_fruits = num;
    }
    int getnumfruits(){
        return num_fruits;
    }
};

class apples : public fruit
{
    public:
    void setnumapples(int num){
        setnumfruits(num);
    }

    int getnumapples(){
        return getnumfruits();
    }
};

class mangoes : public fruit
{
    public:
    void setnummangoes(int num){
        setnumfruits(num);
    }
    int getnummangoes(){
        return getnumfruits();
    }
};

int main()
{
    apples a;
    mangoes m;

    a.setnumapples(5);
    m.setnummangoes(6);

    cout<<"Number of apples: "<<a.getnumapples()<<endl;
    cout<<"Number of mangoes: "<<m.getnummangoes()<<endl;

    int total_fruits;
    total_fruits = a.getnumapples() + m.getnummangoes();

    cout<<"Total number of fruits in the basket are: "<<total_fruits<<endl;
    return 0;
}