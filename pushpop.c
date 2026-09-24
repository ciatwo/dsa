#include <stdio.h>

int main()
{
    int stack[10];
    int top = -1;
    int n, fact = 1, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fact = fact * i;

    top++;
    stack[top] = fact;

    printf("Pushed factorial = %d\n", stack[top]);

    printf("Popped element = %d", stack[top]);
    top--;

    return 0;
}
