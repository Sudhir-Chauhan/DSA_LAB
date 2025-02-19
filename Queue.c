#include <stdio.h>
#define MAX 5 // Maximum queue size

int queue[MAX], front = -1, rear = -1;

//Function to insert an element into the queue
void enqueue(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) front = 0; // Set front on first insertion
        queue[++rear] = value;
        printf("%d enqueued into the queue.\n",value);
    }
}

//Function to remove an element from teh queue
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! Cannot dequeue.\n");
    } else {
        printf("%d dequeued from the queue.\n", queue[front++]);
        if (front >rear) front = rear = -1; //Reset queue when empty
    }
}

// Function to return the front element of the queue
void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Front element is %d\n", queue[front]);
    }
}

//Function to display all elements in the queue
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elemts: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// main Function
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); // Should trigger overflow

    display();
    peek();

    dequeue();
    dequeue();

    display();
    peek();

    return 0;
}