#include <stdio.h>

int find(int a[], int n, int x)
{
    if(n == 0)
        return 0;

    if(a[n - 1] == x)
        return 1;

    return find(a, n - 1, x);
}

int main()
{
    int a[10], n, x, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to find: ");
    scanf("%d", &x);

    if(find(a, n, x))
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}
