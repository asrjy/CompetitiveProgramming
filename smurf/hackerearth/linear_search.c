#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, temp;
    scanf("%d%d", &n, &m);
    int *arr = (int *)malloc(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        arr[i] = temp;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == m)
        {
            printf("%d", i + 1);
            return 0;
        }
    }
    printf("\n-1");
    free(arr);
    return 0;
}