#include<bits/stdc++.h>
using namespace std;


//This program prints the maximum sum of subarray possible
void maxSubArray(int arr[], int n){
    //We initialise two sums, maxSum and currentSum under the following conditions
    int maxSum = arr[0], currentSum = arr[0];
    
    for(int i=0; i<n; i++){

        currentSum += arr[i];
        if(currentSum<arr[i])
            currentSum=arr[i];
        maxSum=max(currentSum, maxSum);
    }
    cout<<maxSum;
}

//Another really nice approach-->Analyse it!!

// int maxSumSubarray(vector<int> a) {
    
//    int max_so_far = a[0];
//    int curr_max = a[0];
 
//    for (int i = 1; i < a.size(); i++)
//    {
//         curr_max = max(a[i], curr_max+a[i]);
//         max_so_far = max(max_so_far, curr_max);
//    }
//    return max_so_far;
// }

int main(){
    //Put out whatever the fuck you want
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    maxSubArray(arr, n);

    return 0;
}