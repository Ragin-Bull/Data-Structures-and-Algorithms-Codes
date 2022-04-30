#include<bits/stdc++.h>
using namespace std;

string stringCompression(string str){
    sort(str.begin(), str.end());
    int n=str.length();

    //Find unique characters
    int unique=1;
    for(int i=0; i<n-1; i++){
        if(str[i]!=str[i-1])
            unique++;
    } 
    
    //First case
    if (unique==n)
        return str;

    string newstr;
    newstr = str[0];
    //Create a new string for the other strings
    int count=1;
    for(int i=0; i<n-1; i++){
        if (str[i]==str[i+1]){
            count++;
        }

        else {
            newstr+= to_string(count);
            newstr+= str[i+1];
            count=1;
        }
    }
    newstr+= to_string(count);
    return newstr;
}

int main(){
    string str;
    str="abracadabra";
    cout<<stringCompression(str);

    return 0;
}