//Q5. MODIFIED BUBBLE SORT ALGORITHM 24AUG2026
#include<stdio.h>
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
        if (swap==0){
            break;
        }
        for(int k=0;k<size;k++){
            printf(" %d", arr[k]);
        }
        printf("\n");
    }
}
int main(){
    int data[]={15,20,10,30,5,25,11,14};
    int size= sizeof(data)/sizeof(data[0]);
    bubbleSort(data,size);
    printf("Bubble Sorted array is \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
}

