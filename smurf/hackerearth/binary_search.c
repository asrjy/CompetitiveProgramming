#include <stdio.h>
#include <stdlib.h>
int b_search(int *arr, int target, int low, int high)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr + mid > target)
        {
            high = mid - 1;
        }
        else if (arr + mid < target)
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int n, q, x, temp;
    scanf("%d", &n);
    int *arr = (int *)malloc(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        arr[i] = temp;
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d", &x);
        printf("%d\n", b_search(arr, x, 0, n - 1));
    }
    return 0;
}