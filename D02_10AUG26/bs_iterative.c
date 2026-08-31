//Q3. BINARY SEARCH OF ARRAY ELEMENT ITERATIVE WAY
#include<stdio.h>
int binarySearch(int arr[],int x,int low,int high){
    while(high>=low){
        int mid=low+(high-low)/2;
        if(x==arr[mid])
        return mid;
        if(x>arr[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int main (){
    int arr[]={10,20,30,50,60,70,80,90,100};
    int x=80;
    int low=0;
    int high = sizeof(arr)/sizeof(arr[0]);
    int result=binarySearch(arr,x,low,high);
    printf("binary search of %d is = %dth position in the array",x,result);
    return 0;
}

