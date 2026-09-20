//Q3. BINARY SEARCH OF ARRAY ELEMENT ITERATIVE WAY
#include<stdio.h>
int binarySearch(int arr[],int search,int low,int high){
    while(high>=low){
        int mid=low+(high-low)/2;
        if(search==arr[mid])
        return mid;
        if(search>arr[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int main (){
    int arr[]={10,20,30,50,60,70,80,90,100};
    int search=80;
    int high = sizeof(arr)/sizeof(arr[0]);
    int result=binarySearch(arr,search,0,high);
    printf("binary search of %d is = %dth position in the array",search,result);
    return 0;
}

