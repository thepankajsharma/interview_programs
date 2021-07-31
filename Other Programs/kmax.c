#include<stdio.h>

void nMax(int d[6],int n,int k);

int main(){

    int a[6]={10,5,11,1,4,2};
    int k=3;
    nMax(a,6,k);

    printf("\n%d\t",a[k-1]);

    return 0;
}

void nMax(int a[6],int n,int k) {
   int temp=0;
   for (int i = 0; i <= n-1; i++)
   {
       for (int j = i+1; j <= n-1; j++)
       {
           if (a[i]>a[j])     
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
           
       }
   }   

   for (int i = 0; i <= n-1; i++)
   {
       printf("%d\t",a[i]);
   }
    
}
