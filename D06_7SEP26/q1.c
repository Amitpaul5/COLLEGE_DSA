//Q2.  7SEP2026
#include<stdio.h>
int binarysearch(int array[],int x,int low,int high){
	if(high >= low){
        int mid = (low +(high-low)/2);
		if(x==array[mid])
		return mid;
		if(x>array[mid])
		return binarysearch(array,x,mid+1,high);
		return binarysearch(array,x,low,mid+1);
    }
	return -1;
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
        // intermediateArray(arr,size);
    }
}
int main(){
    int i;
    int data[]={8,4,3,1,6,9,7,5};
    int size= sizeof(data)/sizeof(data[0]);
    printf("\n given array is : \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
    insertionSort(data,size);
    printf("\n Insertion Sorted array is \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
    int x;
    printf("\n");
    printf("Enter the finding number : ");
    scanf("%d",&x);
    int result = binarysearch(data,x,0,size-1);
    if(result==-1)
    printf("Not found");
    else{
        printf("Found at index number %d",result);
    }
	return 0;
}