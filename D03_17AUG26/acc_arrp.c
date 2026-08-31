//Q2. ACESSING ARRAY ELEMENT USING POINTER
#include <stdio.h>
int main(){
    int arr[5]={7,9,11,13,1};
    printf("address of array = %p",arr);
    printf("\n array element is %d",*(arr+2));
    return 0;
}

