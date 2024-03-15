#include <stdio.h>
#define MAX_STACK_SIZE 10

int stack[MAX_STACK_SIZE] = {0};
int top = -1;

int stack_full(){
    if ((top+1)== MAX_STACK_SIZE)return 1;
    else return 0;
}
int stack_empty(){
    if (top == -1) return 1;
    else return 0;
}

int push(int value){
    if (stack_full() == 1){
        printf("stack is full\n");
    }
    else{
        top++;
        stack[top] = value;
        printf ("push : %d\n", stack[top]);
    }
}
int pop(){
    int popvalue;
    if (stack_empty() == 1){
        printf("stack is empty\n");
    }
    else{
        top--;
        popvalue = stack[top];
        printf("pop : %d\n", popvalue);
    }
}



void main(){
    for (int i=1; i<12; i++){
        push(i);
    }
    for (int i= 1; i<12; i++){
        pop();
    }
    return 0;
}