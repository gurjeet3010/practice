#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,14,9,95,4,48,51};
    int target;
    cin >> target;

    bool found = false;

    for(int i = 0; i < 7; i++)
    {
        if(arr[i] == target){
            cout << i+1;
            found = true;
            break;
        }
    }

    if(!found){
        cout<<"the number doesn't exist";
    }
    return 0;
}