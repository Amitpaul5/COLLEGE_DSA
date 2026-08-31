//Q1. BUBBLE SORT ALGORITHM 24AUG2026
#include<stdio.h>
void intermediateArray(int arr[],int size){
    for(int k=0;k<size;k++){
            printf(" %d", arr[k]);
        }
        printf("\n");
}
void bubbleSort(int arr[],int size){
    for(int step=0;step<size-1;++step){
        for(int i=0;i<size-step-1;++i){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        intermediateArray(arr,size);
    }
}
int main(){
    int data[]={15,20,10,30,5,25};
    int size= sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    printf("Bubble Sorted array is \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
}
