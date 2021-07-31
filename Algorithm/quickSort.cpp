#include <iostream>
using namespace std;

int partition(int arr[7],int start,int end){

    int pivot = arr[start];
    int indexOfPivot = start;
    start++;

    while(start<end){

        while(!(arr[start]>pivot)){
            start++;
        }

        while(!(arr[end]<pivot)){
            end--;
        }

        if(start<end){
            swap(arr[start], arr[end]);
        }
        if(start>end){
            swap(arr[end], arr[indexOfPivot]);
        }
    }
    
    return end;
}
void quickSort(int arr[7],int start,int end){
    
    if(start<end){

    int loc = partition(arr, start, end);
    
    quickSort(arr, start, loc - 1);
    quickSort(arr, loc + 1, end);
    }
}

int main()
{
    int arr[8] = {35,50,15,25,80,20,90,45};

    quickSort(arr, 0, 7);
    cout << "Array after QuickSort: ";
    for(int i=0;i<=7;i++)
        cout << arr[i]<<"\t";

    return 0;
}