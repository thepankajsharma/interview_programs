//  Program to maximize your profit by choosing a single 
//  day to buy one stock and choosing a different day in 
//  the future to sell that stock.
//  Pankaj Sharma
//  12 June 2021

#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,j,minPrice=INT_MAX,profit=0;
    int price[] = { 7, 1, 5, 3, 6, 4 };
    int n = sizeof(price)/sizeof(price[0]);

    for(i=0;i<=n-1;i++){
        minPrice = min(minPrice,price[i]);
        profit = max(profit,price[i] - minPrice);
    }
    cout<<profit;
    
    return 0;

}

//  Output : 5