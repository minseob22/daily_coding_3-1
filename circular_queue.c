#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool is_empty() {
    return (front == -1 && rear == -1);
}

bool is_full() {
    return ((rear + 1) % MAX_SIZE == front);
}

void enqueue(int val) {
    if (is_full()) {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    }

    if (is_empty()) {
        front = 0;
    }

    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = val;
    printf("Enqueued element: %d\n", val);
}

void dequeue() {
    if (is_empty()) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return;
    }

    printf("Dequeued element: %d\n", queue[front]);

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}

void display() {
    if (is_empty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (i != rear) {
        printf("%d ", queue[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("%d\n", queue[rear]);
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    enqueue(4);
    enqueue(5);
    display();
    enqueue(6); // Queue is full
    dequeue();
    dequeue();
    display();
    dequeue();
    dequeue();
    dequeue(); // Queue is empty

    return 0;
}