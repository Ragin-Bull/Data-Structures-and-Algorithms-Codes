#include<bits/stdc++.h>
using namespace std;

string searchKey(int arr[][100], int n, int m, int key){
    int x=0;
    int i=0;
    int j=m-1;

    while(i>=0&&i<=n-1&&j>=0&&j<=m-1){
        if (key==arr[i][j])
            return to_string(i) + "," + to_string(j);
        
        if (key>arr[i][j]){
            //Move one place down
            i++;
            continue;
        }
        if (key<arr[i][j]){
            //Move one place left
            j--;
            continue;
        }
    }
    return "-1";
}

int main(){
    //Put out whatever the fuck you want
    int arr[4][100] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    cout<<searchKey(arr, 4, 4, 22);
    return 0;
}