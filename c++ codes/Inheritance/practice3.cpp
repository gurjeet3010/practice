#include<iostream>
using namespace std;

class cake{
    public:
    float height;
    float weight;
    string shape;
    string message;

    cake(){
        cout <<"WELCOME TO CAKE SHOP"<<endl;
    }
    cake(float h = 5, float w = 2, string s = "square", string m = "Happy Birthday"){
        height = h;
        weight = w;
        shape = s;
        message = m;
    }

    void display()
    {
        cout<<"Cake details.."<<endl;
        cout << "height: " <<height<<"cms"<<endl;
        cout << "weight: " <<weight<<"kg"<<endl;
        cout << "shape: " <<shape<<endl;
        cout << "message: " <<message<<endl;
    }

    void increasesize(float heightincrease = 2.5, float weightincrease = 0.5){
        height += heightincrease;
        weight += weightincrease ;
    }
};

int main()
{
    cake mycake;
    mycake.display();
    mycake.increasesize();
    mycake.display();
    return 0;
}