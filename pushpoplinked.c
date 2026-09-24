#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *newnode, *temp;
    int x;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter element: ");
    scanf("%d", &x);

    newnode->data = x;
    newnode->next = NULL;
    head = newnode;

    printf("After insertion: %d\n", head->data);

    temp = head;
    head = head->next;

    free(temp);

    printf("Node deleted");

    return 0;
}
