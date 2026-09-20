//Q. BINARY SEARCH OF ARRAY ELEMENT RECURCIVE WAY

#include<stdio.h>
int binarysearch(int array[],int search,int low,int high){
	if(high >= low){
        int mid = (low +(high-low)/2);
		if(search==array[mid])
		return mid;
		if(search>array[mid])
		return binarysearch(array,search,mid+1,high);
		return binarysearch(array,search,low,mid-1);
    }
	return -1;
}
	int main(){
    int array[]={10,15,20,25,30,35,40,45,50,55,60};
    int size = sizeof (array)/sizeof (array[0]);
    int search;
    printf("Enter the finding number : ");
    scanf("%d",&search);
    int result = binarysearch(array,search,0,size-1);
    if(result==-1)
    printf("Not found");
    printf("Found at index number %d",result);
	return 0;
    }