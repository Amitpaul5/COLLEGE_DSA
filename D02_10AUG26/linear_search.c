//Q2. LINEAR SEARCH OF ARRAY ELEMENT 
#include <stdio.h>
int linearSearch(int arr[],int search,int size){
    int p=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==search){
        p=i;
        break;
        }
    }
    return p;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int search=40;
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=linearSearch(arr,search,size);
    if(result==-1)
    printf("not found\n");
    printf("position is = %d",result);
    return 0;
}