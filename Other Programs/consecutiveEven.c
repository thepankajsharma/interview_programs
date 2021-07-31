//  Program to find number of consecutive even
//  numbers appear in an array whose sum is >= 20  [asked in Xoriant]
//  Pankaj Sharma
//  17 June 2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int processArray(int array[], int len) {
 
  int i,count = 0,sum=0;

  for (i = 0; i <= len-1; i++)
  {
    if (array[i]%2 == 0)
    {
      sum += array[i];
      
      if (sum == 20 || sum > 20)
        count++;
      
    }
    else{
      sum = 0;
    }
  }

  return count;
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

// Input:
// 3
// 6
// 6
// 4
// 121
// 6
// 16
// 371
// 661
// 6
// -1

// Output:
// 1

