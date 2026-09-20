//Q1. BUBBLE SORT ALGORITHM 24AUG2026
#include<stdio.h>
void printArray(int arr[],int size){
    for(int k=0;k<size;k++){
        printf(" %d", arr[k]);
    }
    printf("\n");
} 
void swap(int arr[], int i, int j){
    int temp = arr[i]; 
    arr[i] = arr[j];
    arr[j] = temp; 
}
void bubbleSort(int arr[],int size){
    for(int step=0;step<size-1;++step){  //AFTER EACH EXTERNAL LOOP ITERATION THE MAX VALUE IS AT THE END
        for(int i=0;i<size-step-1;++i){  //CHEACKING THE CORRECT POSITION OF ELEMENT
            if(arr[i]>arr[i+1])
            swap(arr, i, i+1);
        }
        printArray(arr,size);
    }
}
int main(){
    int arr[]={15,20,10,30,5,25};
    int size= sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    printf("Bubble Sorted array is \n");
    printArray(arr,size);
}
