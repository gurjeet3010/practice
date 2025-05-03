#include<iostream>
using namespace std;

void printinfo(string name = "Guest", int age = 0){
    cout <<"Name: "<<name<<",Age: "<<age<<endl;
}

int main(){
 /*   cout<<"Calling function without providing arguments: \n";
    printinfo();

    cout<<"\nCalling function with only one argument:\n"<<endl;
    printinfo("Alice");

    cout<<"\nCalling function with two arguments:\n";
    printinfo("Bob",25);
*/
    cout<<"\nCalling function with three arguments:\n";
    printinfo("Charlie",65,"Usa");

    return 0;
}