// C Program to Insert a Node after a Given Node in Linked
// List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data);

// Function to insert a new node after a given node
struct Node* insertAfter(struct Node* head, int key,
                         int newData) {
    struct Node* curr = head;

    // Iterate over Linked List to find the key
    while (curr != NULL) {
        if (curr->data == key)
            break;
        curr = curr->next;
    }

    // If curr becomes NULL means, given key is not found
    if (curr == NULL)
        return head;

    // Allocate new node by given data and point
    // the next of newNode to curr's next &
    // point current next to newNode
    struct Node* newNode = createNode(newData);
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

struct Node* createNode(int data) {
    struct Node* newNode
        = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
  
    // Create the linked list 2->3->5->6
    struct Node* head = createNode(2);
    head->next = createNode(3);
    head->next->next = createNode(5);
    head->next->next->next = createNode(6);

    int key = 3, newData = 4;

    // Insert a new node with data 4 after the node having
    // data 3
    head = insertAfter(head, key, newData);

    printList(head);

    return 0;
}
