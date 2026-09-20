// Q1. STACK DATA STRUCTURE 14SEP026
#include<stdio.h>
#define MAX 20
int stack[MAX];
int top=-1;
int isFull(){
    return top==MAX-1;
}
int isEmpty(){
    return top==-1;
}
void push(int value){
    if (isFull())
    printf("stack overflow ");
    else{
        top++;
        stack[top]=value;
        printf("pushed %d \n",value);
    }
}
int pop(){
    if(isEmpty()){
        printf("stack underflow");
        return -1;
    }
    else{
        int poppedValue=stack[top];
        top--;
        return poppedValue;
    }
}
int peek(){
    if(isEmpty()){
        printf("stack empty");
        return -1;
    }
    return stack[top];
}
void display(){
    if(isEmpty()){
        printf("empty");
        return ;
    }
    printf("stack elements are : ");
    for(int i=top;i>=0;i--){
        printf(" %d",stack[i]);
    }
    printf("\n");
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    display();
    printf("top element = %d \n",peek());
    printf("popped= %d \n",pop());
    display();
    return 0;
}

