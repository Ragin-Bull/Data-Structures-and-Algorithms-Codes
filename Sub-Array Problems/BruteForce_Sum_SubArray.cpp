#include<bits/stdc++.h>
using namespace std;

int i_max= _I16_MIN;
int sum=0;

//This program prints the maximum sum of subarray possible
void maxSubArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            sum=0;
            for(int k=i; k<=j; k++)
                sum+=arr[k];
            if(sum>i_max)
                i_max=sum;
        }
    }
    cout<<i_max;
}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    maxSubArray(arr, n);

    return 0;
}