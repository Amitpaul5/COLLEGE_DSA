//Q3. TRAVERSING ARRAY ELEMENT USING POINTER 
#include<stdio.h>
int main (){
    int arr[]={7,9,11,13,1};
    int *p = &arr;
    printf("array element are : ");
    for(int i=0;i<5;i++){
        printf("%d ",*(arr+i));
    };
    return 0;
}