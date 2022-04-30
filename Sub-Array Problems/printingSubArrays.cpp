#include<bits/stdc++.h>
using namespace std;

void printSubArray(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
        cout<<endl<<endl;
    }
}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {1,3,5,7,19,22};
    int n = sizeof(arr)/sizeof(int);
    printSubArray(arr, n);

    return 0;
}