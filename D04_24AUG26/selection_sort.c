// Q2. SELECTION SORT ALGORITHM 24AUG2026
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
void selectionSort(int arr[],int size){
    for (int step=0;step<size-1;step++){ //COMPARE WITH (ASSUMED SMALLEST ELEMENT)WITH ENTAIRE ARRAY & PUT SMALLEST AT FIRST
        int min_idx=step; //SHORTEST ELEMENT IS AT STEP(ZERO INDEX)
        for(int i=step+1;i<size;i++){
            if (arr[i]<arr[min_idx])
            min_idx=i;
        }
        swap(arr, min_idx, step);
        printArray(arr,size);
    }
}
int main(){
    int arr[]={15,20,10,30,5,25};
    int size= sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,size);
    printf("Selection Sorted array is \n");
    printArray(arr,size);
}