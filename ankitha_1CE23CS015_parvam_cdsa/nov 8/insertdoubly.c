// C Program to insert a node at the beginning
//of doubly linked list


#include <stdio.h>

// Node structure for the doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Create a new node
struct Node* createNode(int data) {
    struct Node* new_node = 
      (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

// Insert a node at the beginning
struct Node* insertBegin(struct Node* head, int data) {
    
    // Create a new node
    struct Node* new_node = createNode(data);
    
    // Make next of it as head
    new_node->next = head;
    
    // Set previous of head as new node
    if (head != NULL) {
        head->prev = new_node;
    }
    
    // Return new node as new head
    return new_node;
}

// Print the doubly linked list
void printList(struct Node* head) {
    struct Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
  	printf("\n");
}

int main() {
  
    // Create a hardcoded doubly linked list:
    // 2 <-> 3 <-> 4 
    struct Node *head = createNode(2);
    head->next = createNode(3);
    head->next->prev = head;
    head->next->next = createNode(4);
    head->next->next->prev = head->next;

    // Print the original list
    printf("Original Linked List: ");
    printList(head);

    // Insert a new node at the front of the list
    head = insertBegin(head, 1);

    // Print the updated list
  	printf("After inserting Node 1 at the front: ");
    printList(head);

    return 0;
}
