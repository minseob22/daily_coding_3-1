#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5

int queue1[MAX_SIZE], queue2[MAX_SIZE];
int front1 = -1, rear1 = -1, front2 = -1, rear2 = -1;

bool is_full(int rear) {
    return (rear == MAX_SIZE - 1);
}

bool is_empty(int front, int rear) {
    return (front == -1 && rear == -1);
}

void enqueue(int queue[], int *front, int *rear, int val) {
    if (is_full(*rear)) {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    }
    if (*front == -1) {
        *front = 0;
    }
    (*rear)++;
    queue[*rear] = val;
}

int dequeue(int queue[], int *front, int *rear) {
    if (is_empty(*front, *rear)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    }
    int val = queue[*front];
    if (*front == *rear) {
        *front = -1;
        *rear = -1;
    } else {
        (*front)++;
    }
    return val;
}

void push(int val) {
    if (is_full(rear1)) {
        printf("Stack is full. Cannot push element.\n");
        return;
    }
    enqueue(queue1, &front1, &rear1, val);
    printf("Pushed element: %d\n", val);
}

void pop() {
    if (is_empty(front1, rear1) && is_empty(front2, rear2)) {
        printf("Stack is empty. Cannot pop element.\n");
        return;
    }

    if (is_empty(front1, rear1)) {
        while (!is_empty(front2, rear2)) {
            enqueue(queue1, &front1, &rear1, dequeue(queue2, &front2, &rear2));
        }
    }

    while (front1 != rear1) {
        enqueue(queue2, &front2, &rear2, dequeue(queue1, &front1, &rear1));
    }

    int popped_element = dequeue(queue1, &front1, &rear1);
    if (popped_element != -1) {
        printf("Popped element: %d\n", popped_element);
    }
}



int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6); // Stack is full

    pop();
    pop();

    push(7);
    push(8);

    pop();
    pop();
    pop();
    pop();
    pop(); // Stack is empty
    pop();
    return 0;
}