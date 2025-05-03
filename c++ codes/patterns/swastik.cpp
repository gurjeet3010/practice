#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    int mid=(n/2)+1;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<"*";
            for(int j=2;j<=n;j++)
            {
                if(j<mid)
                {
                    cout<<" ";
                }
                else
                {
                    cout<<"*";
                }
            }
            cout<<"\n";
        }
        if(i!=1 && i<mid)
        {
            for(int k=1;k<=n;k++)
            {
                if(k==1 || k==mid)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
        if(i==mid)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<"*";
            }
            cout<<"\n";
        }
        if(i>mid && i<n)
        {
            for(int k=1;k<=n;k++)
            {
                if(k==mid || k==n)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
        if(i==n)
        {
            for(int j=1;j<=n;j++)
            {
                if(j<=mid || j==n)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
    }
    return 0;
}