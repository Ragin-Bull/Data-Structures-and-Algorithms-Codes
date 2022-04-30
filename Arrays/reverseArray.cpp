#include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y){
    int temp=0;
    temp=x;
    x=y;
    y=temp;
}

void reverseArray(int arr[], int n){
    for(int i=0; i<n/2; i++)
        swap(arr[i], arr[n-1-i]);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {1,3,5,7,19,22};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr, n);

    return 0;
}