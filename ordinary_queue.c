#include <stdio.h>
#define SIZE 5

int front = -1;
int rear = -1;
int queue[SIZE];

void insertRear() {
    if (rear == SIZE - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    int item;
    printf("Enter item: ");
    scanf("%d", &item);
    queue[++rear] = item;
    if (front == -1) {
        front = 0;
    }
    printf("Item inserted successfully!\n");
}

void deleteFront() {
    if (front == -1) {
        printf("Queue Underflow!\n");
        return;
    }
    printf("Deleted element: %d\n", queue[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front++;
    }
}

void display() {
    if (front == -1) {
        printf("Queue Underflow!\n");
        return;
    }
    printf("Elements in the queue are:\n");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertRear();
                break;
            case 2:
                deleteFront();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
