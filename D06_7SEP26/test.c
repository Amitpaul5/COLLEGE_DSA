//Q3.  7SEP2026
#include<stdio.h>
void swap(int arr[], int i, int j){
    int temp;
    temp = arr[i]; 
    arr[i] = arr[j];
    arr[j] = temp; 
}
void bubbleSort(int arr[],int size){
    for(int step=0;step<1;++step){
        for(int i=0;i<size-step-1;++i){
            if(arr[i]>arr[i+1]){
                swap(arr, i, i+1);
            }
        }
    }
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
    int data[]={8,4,3,1,6,9,7,5};
    int size= sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    printf("\n Bubble Sorted array is: \n");
    for(int i=0;i<size;i++){
        printf("  %d",data[i]);
    }
    quickSort(data,0,size-1);
    printf("\n Quick Sorted array is: \n");
    for(int i=0;i<size;i++){
        printf("  %d",data[i]);
    }
    
}
