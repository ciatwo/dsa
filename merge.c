#include <stdio.h>

int main()
{
    int a[10], b[10], c[20];
    int n, m, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    printf("Enter elements:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    for(i = 0; i < n; i++)
        c[i] = a[i];

    for(j = 0; j < m; j++)
        c[n + j] = b[j];

    printf("Merged array:\n");
    for(i = 0; i < n + m; i++)
        printf("%d ", c[i]);

    return 0;
}
