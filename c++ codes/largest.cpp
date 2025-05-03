#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size = 5;
    int marks[] = {5,32,15,48,18};
    int largest = INT_MIN;

// largest number

    for(int i = 0 ; i <= size ; i++){
        largest = max(marks[i], largest);
        // if(marks[i] > largest){
        //     largest = marks[i];
        // }
    }
    cout << "largest = " << largest <<endl;
    return 0;
}