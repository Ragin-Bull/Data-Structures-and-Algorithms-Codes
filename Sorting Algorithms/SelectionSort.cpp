#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){

    int min_element=_I16_MAX;
    int min_index = 0;

    for(int i=0; i<n-1; i++){
        min_element=_I16_MAX;
        for(int j=i; j<n; j++){
            if(arr[j]<min_element){
                min_element=arr[j];
                min_index=j;
            }

        }
        swap(arr[min_index], arr[i]);
    }
}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}