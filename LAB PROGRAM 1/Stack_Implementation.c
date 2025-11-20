#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

// PUSH operation
void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push.\n");
    } else {
        printf("Enter the element to push: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;   // Store value first
        printf("Element %d pushed into the stack.\n", value);
    }
}

// POP operation
void pop() {
    if (top == -1) {
        printf("Stack Underflow! Nothing to pop.\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

// DISPLAY operation
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n____STACK MENU____\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
