#include<iostream>
using namespace std;

int main()
{
    int i,j,n = 5;

    for( i = 1; i <= n ; i++)
    {
        for(j = 1; j <= (n+1-i) ; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}