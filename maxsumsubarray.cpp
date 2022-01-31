#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int maximumSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < A.size() ; i++){
        currentSum = currentSum + A[i];
        if(currentSum>maximumSum)maximumSum = currentSum;
        if(currentSum<0){
            currentSum = 0;
        }
        
    }
    return maximumSum;
}
