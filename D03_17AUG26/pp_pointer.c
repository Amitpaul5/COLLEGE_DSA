#include <stdio.h>

int main() {
    int num = 25;
    int *p;

    p = &num;   // Store address of num in ptr

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void*)&num);

    printf("Value using pointer = %d\n", *p);
    printf("Address stored in pointer = %p\n", (void*)p);

    return 0;
}