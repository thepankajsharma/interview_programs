//  Program to merg two array
//  Pankaj Sharma
//  12 June 2021

#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,j,k;
    i=j=k=0;
    int arr1[] = {2,7,3,8};
    int arr2[] = {9,5,1};
    int newArr[100];
    
    while(i<4)
    {
        newArr[k++] = arr1[i++];
    }
    while(j<3)
    {
        newArr[k++] = arr2[j++];
    }
    newArr[k]='\0';

    sort(newArr,newArr+7);

    for(i=0;newArr[i] != '\0';i++)
        cout<<newArr[i];

    return 0;
}

//  Output
//  Enter a string : hello
//  The string has duplicate characters

//  Enter a string : world
//  All Characters are unique