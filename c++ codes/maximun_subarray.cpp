#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    int n = vec.size();
    for( int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int z = i; z <= j; z++){
                cout << vec[z];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}