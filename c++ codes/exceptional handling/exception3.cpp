#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    try
    {
        {
            if(age < 18)
            {
                cout<<"You are not eligible for voting\n";
            }
            else{
                throw age;
            }
        }
    }
    catch(int age)
    {
        cout<<"You are eligible for voting process";
    }
    return 0;
}