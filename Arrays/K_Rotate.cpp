//Given a vector and an integer k, we have to rotate the vector k times 
#include<bits/stdc++.h>
using namespace std;

vector<int> k_rotate (vector<int> arr, int k){
    int n=arr.size();
    if(n==k)
        return arr;
    int d=k%n;
    while(d--){
        int temp=arr[n-1];
        for(int i=n-1; i>=0; i--){
            arr[i]=arr[i-1];   
        }
        arr[0]=temp;
    }
    return arr;
    
}

signed main(){
    int x=15;
    vector<int> arr={1,2,3,4,5,6,7};
    vector<int> vec = k_rotate(arr, 2);
    
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}