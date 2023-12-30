#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node *front, *rear;
};

void enQueue(struct Queue* q, int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }
    q->rear->next = temp;
    q->rear = temp;
}

void deQueue(struct Queue* q) {
    if (q->front == NULL)
        return;
    struct Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
}

int main() {
    struct Queue q = { NULL, NULL };
    enQueue(&q, 10);
    enQueue(&q, 20);
    deQueue(&q);
    deQueue(&q);
    enQueue(&q, 30);
    enQueue(&q, 40);
    enQueue(&q, 50);
    deQueue(&q);
    printf("Queue Front : %d \n", q.front->data);
    printf("Queue Rear : %d", q.rear->data);
    return 0;
}
