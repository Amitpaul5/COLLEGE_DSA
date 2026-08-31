//ACESSING & TRAVERSING THE ARRAY ELEMENT
#include<stdio.h>
int main(){
    int i,j;
    //acessing 
    int arr[3][5]={{2,4,8,9,6},{1,5,9,6,3},{3,1,5,6,9}};
    printf("enter the array index : ");
    scanf("%d%d",&i,&j);
    printf("array valu is %d\n",arr[i][j]);
    //traversing
    printf("array element are:\n");
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}