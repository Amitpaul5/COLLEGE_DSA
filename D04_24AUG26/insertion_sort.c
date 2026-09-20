//Q3. INSERTION SORT ALGORITHM 24AUG2026
#include<stdio.h>
void printArray(int arr[],int size){
    for(int k=0;k<size;k++){
        printf(" %d", arr[k]);
    }
    printf("\n");
} 
void insertionSort(int arr[],int size){
    for(int step=1;step<size;step++){
        int key=arr[step];
        int j=step-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
        printArray(arr,size);
    }
}
int main(){
    int arr[]={15,20,10,30,5,25};
    int size= sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    printf("Insertion Sorted array is \n");
    printArray(arr,size);
}