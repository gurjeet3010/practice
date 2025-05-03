#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    try 
    {
        if(age >= 24)
        {
            cout<<"You have access to drink the alcohol!\n";
        }
        else{
            throw(age);
        }
    }

    catch(int age)
    {
        cout<<"You dont have the access to drink alcohol because your age is less than 24\n";
        cout<<"Your age is: "<<age;
    }

    return 0;
}