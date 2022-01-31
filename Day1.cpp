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

