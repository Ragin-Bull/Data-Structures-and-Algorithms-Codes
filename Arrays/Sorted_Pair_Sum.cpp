//Given a sorted array and a number x, find the pair of numbers whose sum is closest to x.
#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int n = arr.size();
    pair<int, int> p;
    p.first = 0;
    p.second = 0;
    int pairSum= INT16_MAX;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(pairSum>abs(x-(arr[i]+arr[j]))){
                pairSum=abs(x-(arr[i]+arr[j]));
                p.first=arr[i];
                p.second=arr[j];
            }
        }
    }
return p;
}

signed main(){
    vector<int> arr {8,-1,8,9,4,5,6,7,9,2};
    int x=15;
    pair<int, int> p = closestSum(arr,15);
    cout<<p.first<<" "<<p.second;
    return 0;
}