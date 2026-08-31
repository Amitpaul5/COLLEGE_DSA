//Q2. LINEAR SEARCH OF ARRAY ELEMENT 
#include <stdio.h>
int linearSearch(int arr[],int key,int n){
    int p=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            p=i;
        break;
        }
    }
    return p;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int key=40;
    int result=linearSearch(arr,40,8);
    if(result==-1)
    printf("not found\n");
    printf("position is = %d",result);
    return 0;
}