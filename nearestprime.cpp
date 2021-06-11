//  Program to find nearest Prime number
//  Pankaj Sharma
//  11 June 2021

#include<iostream>
using namespace std;

int isPrime(int n){
    int i,k=0;
    for(i=1;i<=n;i++){
        if (n%i == 0)
            k++;  
    }

    if (k == 2)
        return true;
    else
        return false;

}

int main(){

    int i,j,greaterPrime,smallerPrime,n;
    greaterPrime = smallerPrime = 0;

    cout<<"Enter a number : ";
    cin>>n;

    for(i=n; ;i--){
        if (isPrime(i))
        {
            smallerPrime = i;
            break;
        }
    }

    for(j=n; ;j++){
        if (isPrime(j))
        {
            greaterPrime = j;
            break;
        }
    }

    if (i == j)
        cout<<"Nearest prime of "<<n<<" is "<<i;
    else
        cout<<"Nearest prime of "<<n<<" is "<<i<<" & "<<j;

    return 0;
}


//  Output :

//  Enter a number : 7
//  Nearest prime of 7 is 7

//  Enter a number : 30
//  Nearest prime of 30 is 29 & 31