#include<bits/stdc++.h>
using namespace std;

void spiralPrint(int arr[][100], int n, int m){
    //Array us passed with n rows and m columns or it is n x m.
    //We first initialise the parameters required
    int startRow=0;
    int startCol=0;
    int endRow = n-1;
    int endCol = m-1;

    // for(int j=1; j<m; j=j+2){
        
    //     for(int i=0; i<=n-1; i++)
    //         cout<<arr[i][n-j]<<" ";
        
    //     for(int i=n-1; i>=0; i--)
    //         cout<<arr[i][n-j-1]<<" ";
    // }

    while(startCol<=endCol && startCol<=endCol){

        for(int j=startCol; j<=endCol; j++)
            cout<<arr[startRow][j]<<" ";
        
        for(int i=startRow+1; i<=endRow; i++)
            cout<<arr[i][endCol]<<" ";
        
        for(int j=endCol-1; j>=startCol; j--){
            if(startRow==endRow)
                break;
            cout<<arr[endRow][j]<<" ";
        }

        for(int i=endRow-1; i>startRow; i--){
            if(startCol==endCol)
                break;
            cout<<arr[i][startCol]<<" ";
        }

        //We update the variables
        startRow++;
        startCol++;
        endCol--;
        endRow--;
    }
}

int main(){
    //Put out whatever the fuck you want
    int arr[4][100] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    spiralPrint(arr, 4, 4);
    return 0;
}