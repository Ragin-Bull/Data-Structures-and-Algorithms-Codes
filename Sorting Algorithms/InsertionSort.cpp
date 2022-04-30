#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        for(int j=i-1; j>=0; j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}