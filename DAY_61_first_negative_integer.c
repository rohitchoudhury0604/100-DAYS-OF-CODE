DAY_61_first_negative_integer.c//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
#include <stdlib.h> 

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Deque {
    struct Node* front;
    struct Node* rear;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

struct Deque* createDeque() {
    struct Deque* deque = (struct Deque*)malloc(sizeof(struct Deque));
    if (deque == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    deque->front = NULL;
    deque->rear = NULL;
    return deque;
}

void enqueueRear(struct Deque* deque, int data) {
    struct Node* newNode = createNode(data);
    if (deque->rear == NULL) {
        deque->front = newNode;
        deque->rear = newNode;
    } else {
        deque->rear->next = newNode;
        newNode->prev = deque->rear;
        deque->rear = newNode;
    }
}

int dequeueFront(struct Deque* deque) {
    if (deque->front == NULL) {
        return -1; 
    }
    struct Node* temp = deque->front;
    int data = temp->data;
    deque->front = deque->front->next;
    if (deque->front != NULL) {
        deque->front->prev = NULL;
    } else {
        deque->rear = NULL;
    }
    free(temp);
    return data;
}

int dequeueRear(struct Deque* deque) {
    if (deque->rear == NULL) {
        return -1; 
    }
    struct Node* temp = deque->rear;
    int data = temp->data;
    deque->rear = deque->rear->prev;
    if (deque->rear != NULL) {
        deque->rear->next = NULL;
    } else {
        deque->front = NULL;
    }
    free(temp);
    return data;
}

int isEmpty(struct Deque* deque) {
    return deque->front == NULL;
}

int getFront(struct Deque* deque) {
    if (deque->front == NULL) {
        return -1;
    }
    return deque->front->data;
}

void findFirstNegativeInSubarrays(int arr[], int n, int k) {
    struct Deque* deque = createDeque();

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            enqueueRear(deque, i);
        }
    }

    for (int i = k; i < n; i++) {
        if (!isEmpty(deque)) {
            printf("%d ", arr[getFront(deque)]);
        } else {
            printf("0 ");
        }

        while (!isEmpty(deque) && getFront(deque) <= i - k) {
            dequeueFront(deque);
        }

        if (arr[i] < 0) {
            enqueueRear(deque, i);
        }
    }

    if (!isEmpty(deque)) {
        printf("%d ", arr[getFront(deque)]);
    } else {
        printf("0 ");
    }
    printf("\n");

    while (!isEmpty(deque)) {
        dequeueFront(deque);
    }
    free(deque);
}

int main() {
    int arr[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("First negative integers in subarrays of size %d: ", k);
    findFirstNegativeInSubarrays(arr, n, k);

    int arr2[] = {-8, 2, 3, -6, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 2;

    printf("First negative integers in subarrays of size %d: ", k2);
    findFirstNegativeInSubarrays(arr2, n2, k2);

    int arr3[] = {1, 2, 3, 4, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;

    printf("First negative integers in subarrays of size %d: ", k3);
    findFirstNegativeInSubarrays(arr3, n3, k3);

    return 0;

}

