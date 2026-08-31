#include <stdio.h>
int fact(int n){
    if(n==0||n==1)
    return 1;
    else 
    return n*factorial(n-1)
}
int main (){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("factorial of %d=%d \n",factorial(n)),
    return 0;
}