//  Program to check if a string has all unique characters
//  Pankaj Sharma
//  11 June 2021

#include<iostream>
using namespace std;

int checkForUnique(string str){
    int i,j;
    for(i=0;i<=str.length()-1;i++){
        for(j=i+1;j<=str.length()-1;j++){
            if (str[i] == str[j])
                return false;
        }
    }
    return true;
}

int main(){

    int i,j;
    string str;

    cout<<"Enter a string : ";
    cin>>str;
    
    if(checkForUnique(str))
        cout<<"All Characters are unique";
    else
        cout<<"The string has duplicate characters";

    return 0;
}

//  Output
//  Enter a string : hello
//  The string has duplicate characters

//  Enter a string : world
//  All Characters are unique