//Started with array

//largest element in array
#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr) {
    
     int largest = INT_MIN;
     for(int element : arr){
         largest = max(largest,element);
     }
     return largest;
}


//Maximum subarray sum
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

