#include<iostream>
using namespace std;

int main()
{
    int num;
    int denum;
    int output =0;

    cout<<"Please enter the numbers to do the division\n";
    cin>>num;
    cin>>denum;

    try
    {
        if(denum == 0)
        {
            throw denum;
        }
        else{
            output = num/denum;
        }
    }
    catch(int d)
    {
        cout<<"You cannot enter 0 in denominator while doing the divison operation\n";
    }

    cout<<"The output after division is: "<<output;
    return 0;
}   
