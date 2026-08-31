// ACESSING THE DATA STRUCTURE BY SWITCH CASE
#include<stdio.H>
int main(){
    int n;
    printf(" 1.array\n 2.link list\n 3.tree\n 4.graph\n");
    printf("enter your choice: ");
    scanf("%d",&n);
    switch (n){
        case 1: printf("static->linear->non primitive data structure");
        break;
        case 2: printf("dynamic->linear->non primitive data structure");
        break;
        case 3: printf("non linear->non primitive data structure");
        break;
        case 4: printf("non linear->non primitive data structure");
        break;
        case 5: printf("invalid data structure");
    }
    return 0;
}