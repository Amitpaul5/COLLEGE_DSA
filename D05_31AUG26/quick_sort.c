//Q1. QUICK SORT ALGORITHM 31AUG2026
#include<stdio.h>
void intermediateArray(int arr[],int size){
    for(int k=0;k<size;k++){
            printf(" %d", arr[k]);
        }
        printf("\n");
}
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<=pivot){
            i++;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        // intermediateArray(arr,);
    }
    int temp=arr[i+1];
        arr[i+1]=arr[high];
        arr[high]=temp;
        
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
    int data[]={15,20,10,30,5,25};
    int size= sizeof(data)/sizeof(data[0]);
    quickSort(data,0,size-1);
    printf("Quick Sorted array is \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
}
