//  Program to Compress String
//  Pankaj Sharma
//  12 June 2021

#include<bits/stdc++.h>
using namespace std;

void stringCompress(string str){

    int i,n,count;
    n = str.length();

    for (i = 0; i < n-1; i++)
    {
        count=1;
        while (i<n && str[i] == str[i+1])
        {
            count++;
            i++;
        }
        cout<<str[i]<<count;
    }
}

int main(){

    string str;
    cout<<"Enter a string : ";
    cin>>str;
    cout<<"Compressed string : ";
    stringCompress(str);

    return 0;
}

//  Output
//  Enter a string : aaaabbcdddddd
//  Compressed string : a4b2c1d6