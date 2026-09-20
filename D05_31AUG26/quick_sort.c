//Q1. QUICK SORT ALGORITHM 31AUG2026
#include<stdio.h>
void printArray(int arr[],int size){
    for(int k=0;k<size;k++){
        printf(" %d", arr[k]);
    }
    printf("\n");
} 
void swap(int arr[], int i, int j){
    int temp;
    temp = arr[i]; 
    arr[i] = arr[j];
    arr[j] = temp; 
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
        i++;
        swap(arr, j, high);
        }
    }
    swap(arr, i+1, high);
    return(i+1);
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main(){
    int arr[]={5,1,9,7,4,8,3,2,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,size-1);
    printf("Quick Sorted array is \n");
    printArray(arr,size);
}
