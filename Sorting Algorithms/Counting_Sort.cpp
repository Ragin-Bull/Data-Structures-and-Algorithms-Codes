#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n){
int largest_element = _I16_MIN;
//Find the largest element to get an idea of the range
for(int i=0; i<n; i++){
    if(arr[i]>largest_element)
        largest_element = arr[i];
}
vector<int> v (largest_element+1,0);
//We assume that all the elements are positive

//Creation of freq array
for(int i=0; i<n; i++){
    v[arr[i]]++;
}

//Creation of the sorted array
int j=0;
for(int i=0; i<=largest_element;i++){
    while(v[i]>0){
        arr[j]=i;
        j++;
        v[i]--;
    }
}

}

int main(){
    //Put out whatever the fuck you want
    int arr[] = {4,6,9,5,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    countingSort(arr, n);

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}