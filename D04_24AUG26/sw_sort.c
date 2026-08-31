//Q5. SWITCH CASE SORTING
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
void insertionSort(int arr[],int size){
    for(int step=1;step<size;step++){
        int key=arr[step];
        int j=step-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
        intermediateArray(arr,size);
    }
}
int main(){
    int data[]={15,20,10,30,5,25};
    int size= sizeof(data)/sizeof(data[0]);
    int n;
    printf(" choice1 : bubbleSort \n choice2 : selectionSort\n choice3 : insertionSort\n ");
    printf("enter your choice : ");
    scanf("%d",&n);
    switch(n){
        case 1:bubbleSort(data,size); break;
        case 2:selectionSort(data,size);break;
        case 3:insertionSort(data,size);break;
        default:printf("wrong input");
    }
    printf("Sorted array is: \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
}