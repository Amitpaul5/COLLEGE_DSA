#include<stdio.h>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int p, int q, int r) {
    int n1 = q-p+1;
    int n2 = r-q;

    int L[n1], R[n2];

    for (int i =0; i<n1; i++)
        L[i] = arr[p + i];
    for (int j=0; j<n2; j++)
        R[j] =arr[q+1+j];
    int i, j, k;
    i =0,j =0,k =p;
    while (i <n1 && j <n2) {
        if (L[i] <=R[j]) {
            arr[k] =L[i];
            i++;
        } else {
            arr[k] =R[j];
            j++;
        }
        k++;
    }
    while (i <n1) {
        arr[k]=L[i];
        i++;
        k++;
    }
    while (j<n2) {
        arr[k]=R[j];
        j++;
        k++;
    }
}
int main() {
    int arr[]={5,2,6,4,7,8,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m=n/2;
    merge(arr,0,m-1,n-1);
    return 0;
}