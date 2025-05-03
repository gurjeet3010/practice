#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int n = vec.size();

    int maxSum = INT_MIN;

    for(int st = 0; st < n; st++){
        int currentSum = 0;
        for(int end = st; end < n; end++){
            currentSum += vec[end];
            maxSum = max(currentSum, maxSum);
        }
        
    }
    cout<< "Max sum array value: " << maxSum <<endl;
    return 0;
}