//Q4. ADDRESS CALCULATION USING POINTER 
#include<stdio.h>
int main (){
    int i,j,b,w,lr,n,lc;
    
    printf("enter the row ,column: ");
    scanf("%d%d",&i,&j);
    b=1200;
    w=4,n=2;
    int add=b+w*(i*n+j);

    printf("address of %d%d: %d",i,j,add);
    return 0;
}