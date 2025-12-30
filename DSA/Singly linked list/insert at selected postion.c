#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Append at end */
void append(int data) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

/* Insert at selected position */
void insert_at_position(int data, int pos) {
    if (pos < 1) {
        printf("Invalid position\n");
        return;
    }

    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = data;

    /* Insert at head */
    if (pos == 1) {
        newnode->next = head;
        head = newnode;
        return;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        free(newnode);
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

/* Display list */
void display() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, data, pos;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter data to insert: ");
    scanf("%d", &data);

    printf("Enter position: ");
    scanf("%d", &pos);

    insert_at_position(data, pos);

    printf("Linked List: ");
    display();

    return 0;
}
