#include<iostream>
#include<climits>
using namespace std;

int main(){
    int size = 5;
    int marks[] = {5,32,15,48,18};
    int smallest = INT_MAX;

// smallest number

    for(int i = 0 ; i <= size ; i++){
        smallest = min(marks[i],smallest);
        // if(marks[i] < smallest){
        //     smallest = marks[i];
        // }
    }
    cout << "smallest = " << smallest <<endl;
    return 0;
}
