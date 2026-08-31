//Q1. MARGE SORT ALGORITHM 24AUG2026
#include<stdio.h>
void intermediateArray(int arr[],int size){
    for(int k=0;k<size;k++){
            printf(" %d", arr[k]);
        }
        printf("\n");
}
void merge(int arr[],int p,int q, int r){
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],M[n2];
    for(int i=0;i<n1;i++){
        L[n1]=arr[p+i];
    }
    for(int j=0;j<n2;j++){
        M[j]=arr[q+1+j];
    }
    int i,j,k;
    i=0;j=0;k=p;
    while(i<n1 && i<n2){
        if(L[i]<=M[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=M[j];
            j++;
        }
        k++;
    }
    while(i<n1){
    arr[k]=L[i];
    i++;
    k++;
    }
    while(j<n2){
    arr[k]=M[j];
    j++;
    k++;
}
}
int main(){
    int data[]={15,20,10,30,5,25};
    int size= sizeof(data)/sizeof(data[0]);
    int mid=size/2;
    merge(data,0,mid,size-1);
    printf("merge Sorted array is \n");
    for(int i=0;i<size;++i){
        printf("  %d",data[i]);
    }
}