#include <stdio.h>
#include <stdlib.h>

// Node structure for doubly linked list
struct Node {
    int data; // Data stored in the node
    struct Node* prev; // Pointer to the previous node
    struct Node* next; // Pointer to the next node
};

// Constructor function to create a new node
struct Node* createNode(int val) {
    struct Node* newNode = 
         (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to find the length of a doubly linked list
int findLength(struct Node* head) {
    int count = 0;
    for (struct Node* cur = head; cur != NULL; cur = cur->next)
        count++;
    return count;
}

int main() {
    // Create a DLL with 3 nodes
    struct Node* head = createNode(1);
    struct Node* second = createNode(2);
    struct Node* third = createNode(3);

    head->next = second; 
    second->prev = head;
    second->next = third; 
    third->prev = second;

    printf("Length of the doubly linked list: %d\n", 
           findLength(head));

    return 0;
}
