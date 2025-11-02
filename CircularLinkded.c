#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Insert at end
void insertAtEnd(struct Node** head_ref, int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    struct Node* temp = *head_ref;
    newNode->data = data;
    newNode->next = *head_ref;

    if (*head_ref == NULL) {
        newNode->next = newNode;
        *head_ref = newNode;
        return;
    }

    while (temp->next != *head_ref)
        temp = temp->next;

    temp->next = newNode;
}

// Delete node by key
void deleteNode(struct Node** head_ref, int key) {
    if (*head_ref == NULL)
        return;

    struct Node *curr = *head_ref, *prev;

    while (curr->data != key) {
        if (curr->next == *head_ref) return;
        prev = curr;
        curr = curr->next;
    }

    if (curr == *head_ref && curr->next == *head_ref) {
        *head_ref = NULL;
        free(curr);
        return;
    }

    if (curr == *head_ref) {
        prev = *head_ref;
        while (prev->next != *head_ref)
            prev = prev->next;
        *head_ref = curr->next;
        prev->next = *head_ref;
        free(curr);
    } else if (curr->next == *head_ref) {
        prev->next = *head_ref;
        free(curr);
    } else {
        prev->next = curr->next;
        free(curr);
    }
}

// Traverse (Circular)
void traverse(struct Node* head) {
    struct Node* temp = head;
    if (head != NULL) {
        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("(head)\n");
    }
}

// Main
int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    printf("Circular Linked List:\n");
    traverse(head);

    deleteNode(&head, 20);
    printf("After deleting 20:\n");
    traverse(head);

    return 0;
}
