//Q1. INSERTION & DELETION OF ARRAY ELEMENT 
#include<stdio.h>
int insertion(int arr[],int n,int pos){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=50;
}
int deletion(int arr[],int n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main(){
    int arr[6]={10,20,30,40};
    int n=4;
    int pos=2;
    printf("\n insertion\n");
    int result1=insertion(arr,4,2);
    n++;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
    printf("\n deletion \n");
    int result=  deletion (arr,4,2);
    n--;
    for (int i=0;i<n;i++){
        arr[i]=arr[i+1];
        printf("%d",arr[i+1]);
         printf(" ");
    }
    return 0;
}