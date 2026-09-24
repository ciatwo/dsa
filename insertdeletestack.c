#include <stdio.h>

int main()
{
    int queue[10];
    int front = 0, rear = -1;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        rear++;
        scanf("%d", &queue[rear]);
    }

    printf("Queue after insertion:\n");
    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    front++;

    printf("\nAfter deletion:\n");
    for(i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    return 0;
}
