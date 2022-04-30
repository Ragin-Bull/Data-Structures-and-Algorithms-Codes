#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
   int s=0, e=n-1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key)
            return mid;
        else if (arr[mid]>key){
            s=0; e=mid-1;
            continue;
        }
        else if (arr[mid]<key)
            s=mid+1; e=n-1;
            continue;
    }
    return -1;
}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {1,3,5,7,19,22};
    int n = sizeof(arr)/sizeof(int);
    cout<<binarySearch(arr, n, 25);

    return 0;
}