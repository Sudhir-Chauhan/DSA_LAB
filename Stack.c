#include <stdio.h>
#define MAX 5  // Maximum stack size

int stack[MAX], top = -1;

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed into the stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top--]);
    }
}

// Function to return the top element of the stack
void peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

// Function to display all elements in the stack
void display() {
    if (top == -1) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main function
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60); // Should trigger overflow

    display();


    pop();
    pop();

    display();
    

    return 0;
}
