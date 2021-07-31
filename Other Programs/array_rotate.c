#include<stdio.h>

void rotate(int nums[7],int size,int d);

int main(){
    int nums[7]={1,2,3,4,5,6,7};
    rotate(nums,7,2);

    for(int i=0;i<=6;i++)
        printf("%d\t",nums[i]);

    return 0;
}

void rotate(int nums[7],int size,int d) {
    int temp=0,i,j;

    for(i=0;i<=d-1;i++){

        temp = nums[0];
        for(j=0;j<=size-2;j++)
            nums[j]=nums[j+1];
        nums[j]=temp;
    }
    
}
