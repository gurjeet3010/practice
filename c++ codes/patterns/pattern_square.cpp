#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++ )
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;    
}