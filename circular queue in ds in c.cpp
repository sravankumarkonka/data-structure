#include <stdio.h>
#include <stdlib.h>
#define MAX 5 
int queue[MAX];
int front = -1;
int rear = -1;
int isFull() {
  if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
    return 1;
  } else {
    return 0;
  }
}
int isEmpty() {
  if (front == -1) {
    return 1;
  } else {
    return 0;
  }
}
void enqueue(int data) {
  if (isFull()) {
    printf("Queue is full\n");
  } else {
    if (front == -1) {
      front = 0;
    }
    rear = (rear + 1) % MAX; 
    queue[rear] = data;
    printf("Inserted %d\n", data);
  }
}
int dequeue() {
  int data;
  if (isEmpty()) {
    printf("Queue is empty\n");
    return -1;
  } else {
    data = queue[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } else {
      front = (front + 1) % MAX;
    }
    printf("Deleted %d\n", data);
    return data;
  }
}
void display() {
  int i;
  if (isEmpty()) {
    printf("Queue is empty\n");
  } else {
    printf("Queue elements:\n");
    i = front;
    while (i != rear) {
      printf("%d ", queue[i]);
      i = (i + 1) % MAX;
    }
    printf("%d\n", queue[i]);
  }
}
int main() {
  int choice, data;
  while (1) {
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1:
      printf("Enter the data to insert: ");
      scanf("%d", &data);
      enqueue(data);
      break;
    case 2:
      data = dequeue();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}
