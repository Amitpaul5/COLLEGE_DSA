//Q4. LINEAR SEARCH USING POINTER 
#include<stdio.h>
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==*(arr+i)){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int n=sizeof(arr)/sizeof(arr[0]),key,pos;
    printf("enter the valu of key : ");
    scanf("%d",&key);
    pos= linearSearch(arr,n,key);
    if(pos==-1)
    printf("not found");
    printf("found at array index of %d",pos);
    return 0;
}