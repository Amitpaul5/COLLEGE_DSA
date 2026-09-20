//Q5. MODIFIED BUBBLE SORT ALGORITHM 24AUG2026
#include<stdio.h>
void printArray(int arr[],int size){
    for(int k=0;k<size;k++){
        printf(" %d", arr[k]);
    }
    printf("\n");
} 
void bubbleSort(int arr[],int size){
    int swap=0;
    for(int step=0;step<size-1;++step){
        for(int i=0;i<size-step-1;++i){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swap=1;
            }
        }
        if (swap==0)
        break;
        printArray(arr,size);
    }
}
int main(){
    int arr[]={6,4,7,8,1,9,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    printf("Bubble Sorted array is \n");
    printArray(arr,size);
}

