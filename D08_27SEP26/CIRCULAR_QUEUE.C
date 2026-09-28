//Q1. CIRCULAR QUEUE DATA STRACTURE 28SEP2026
#include<stdio.h>
#define size 5
int item[size];
int front =-1,rear=-1;
int isFull(){
    if((front==(rear+1)%size)||(front==0 && rear==size-1))
    return 1;
    return 0;
}
int isEmpty(){
    if (front==-1)
    return 1;
    return 0;
}
void enQueue(int element){
    if(isFull())
    printf("\nQueue is full");
    else{
        if(front==-1)
        front=0;
        rear=(rear+1)%size;
        item[rear]=element;
        printf("\ninserted = %d",element);
    }
}
int deQueue(){
    int element;
    if(isEmpty()){
         printf("\n empty");
        return -1;
    }
    else{
        element=item[front];
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%size;
        }
        printf("\ndelete element = %d",element);
        return(element);
    }
}
void display(){
    int i;
    if(isEmpty())
     printf("Queue is Empty");
    else{
        printf("\nfront = %d",front);
        for(i=front;i!=rear;i=(i+1)%size){
            printf(" %d ",item[i]); 
        }
        printf(" %d",item[i]);
        printf("\nrear = %d",rear);
    }
}
int main(){
    display();
    deQueue();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    enQueue(40);
    enQueue(50);
    enQueue(60);
    display();
    deQueue();
    enQueue(70);
    deQueue();
    display();
}