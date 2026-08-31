// Q2. SELECTION SORT ALGORITHM 24AUG2026
#include<stdio.h>
void intermediateArray(int arr[],int size){
    for(int k=0;k<size;k++){
        printf(" %d", arr[k]);
    }
    printf("\n");
}
void selectionSort(int arr[],int size){
    for (int step=0;step<size-1;step++){
        int min_idx=step;
        for(int i=step+1;i<size;i++){
            if (arr[i]<arr[min_idx]){
                min_idx=i;
            }
        }
        int temp=arr[min_idx];
        arr[min_idx]=arr[step];
        arr[step]=temp;
        intermediateArray(arr,size);
    }
}

int main(){
    int data[]={15,20,10,30,5,25};
    int size= sizeof(data)/sizeof(data[0]);
    selectionSort(data,size);
    printf("Selection Sorted array is \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
}