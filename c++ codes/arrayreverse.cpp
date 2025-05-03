#include<iostream>
using namespace std;

int main(){
    int arr[] = {69,88,26,16,30,10,8,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    int i = 0, j = size - 1;

    cout << "Actual array: ";
    for (int g = 0; g < size; g++) {
        cout << arr[g] << " ";
    }
    while (i < j) {
        swap(arr[i], arr[j]);  // Swap elements
        i++;
        j--;
    }
    
    cout << "\nReversed array: ";
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    return 0;
}