#include<iostream>
#include<stdlib.h>
using namespace std;
class library
{   
    public:
    char b_id[50];  
    char b_name[50];
    int pages;
    char a_name[50];
    char std_name;
    int rollno;
};
int main()
{
    library lib[20];
    int input=0;
    int count=0;

    while(input!=3){
        cout<<"Enter 1 to input details like id,name,author,student,price,pages"<<endl;
        cout<<"Enter 2 to display details"<<endl;
        cout<<"Enter 3 to quit"<<endl;
        cin>>input;

        switch(input){
            case 1:
            {
                start:
                cout<<"Enter Book Id:"<<endl;
                cin>>lib[count].b_id;     //indexing ke sath values maintain krne ke liye...b_id ko access krega
                cout<<"Enter Book name:"<<endl;
                cin>>lib[count].b_name;        //b_name ko access krega
                cout<<"Enter Author name:"<<endl;
                cin>>lib[count].a_name;      //a_name ko access krega
                cout<<"Enter Student name:"<<endl;
                cin>>lib[count].std_name;   //std_name ko access krega
                cout<<"Enter Book pages:"<<endl;
                cin>>lib[count].pages;      //pages ko access krega
                count++;
                break;
            }
            case 2:
            {
                for(int i=0;i<count;i++){
                    cout<<"Book Id:"<<lib[i].b_id<<endl;
                    cout<<"Book name:"<<lib[i].b_name<<endl;
                    cout<<"Author's name:"<<lib[i].a_name<<endl;
                    cout<<"Student name:"<<lib[i].std_name<<endl;
                    cout<<"Number of pages in book:"<<lib[i].pages<<endl;
                }
                break;
            }
            case 3:
            {
                exit(0);    //quit krdega aur 0 pass krdega 
                break;
            }
            default:
            {
                cout<<"You have entered wrong value please try again";
                goto start;
            }
        }
    }
    return 0;
}