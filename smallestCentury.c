//  Program to find Smallest century greater than 
//  or equal to 100 from an given array [asked in Xoriant]
//  Pankaj Sharma
//  17 June 2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int processArray(int array[], int len) {
 
 int i,j,temp, result = 0;
    for(i=0;i<=len-1;i++){
        for(j=i+1;j<=len-1;j++){
            if (array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            
        }
    }

    for(i=0;i<=len-1;i++){
        if (array[i] == 100 || array[i] > 100)
        return array[i];
    }


  return 0;
}

int main() {
  int *array;
  int len = 0, maxsize = 1024, i, input;
  int result;
  array = (int *)malloc(maxsize*sizeof(int));
  while(scanf("%d", &input) == 1) {
    if (input < 0) break; /* Stop when a negative number is entered */
    array[len++] = input;
    if (len == maxsize) { /* array is full. increase size */
      maxsize *= 2;
      array = (int *)realloc(array, maxsize*sizeof(int));
    }
  }
  result = processArray(array, len);
  printf("%d\n", result);
  return 0;
}

//  Input:
//  5
//  817
//  3
//  151
//  -1

//  Output:
//  151

