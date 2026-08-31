#include<stdio.h>
void bubbleSort(int a[], int size){
    int swap=0;
    for(int step = 0; step < size - 1; step++){
        for(int i = 0; i < size - step - 1; i++){
            if(a[i] > a[i + 1]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                swap = 1;
            }
        }
        for(int j = 0; j < size; j++)
        {
        printf("%d ", a[j]);
        }
        printf("\n");
        if(swap==0) return ;
    }
}
int main(){
    int a[] = {8,4,10,6,2};
    int size = sizeof(a) / sizeof(a[0]);
    bubbleSort(a, size);
    printf("Sorted array: ");
    for(int i = 0; i < size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}