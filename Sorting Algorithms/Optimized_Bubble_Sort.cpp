#include<bits/stdc++.h>
using namespace std;

int optBubbleSort(int arr[], int n){
    //Here the best case complexity will be O(n)
    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                flag=true;
                swap(arr[j],arr[j+1]);
            }
        }
    if(!flag==true)
        return 1;
    }
    return 0;
}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    optBubbleSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}