#include <stdio.h>

void Max(int a[], int n, int k)
{int i, j, max;
    for(i = 0; i <= n-k; i++)
    { max = a[i];
        for(j = i; j < i+k; j++)
        {
            if(a[j] > max)
            {
                max = a[j];
            }
        }
        printf("%d ", max);
    }
}
int main()
{
    int a[100], n, k, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    if(k < 1 || k > n)
    {
        printf("Invalid k");
    }
    else
    {
        Max(a, n, k);
    }
    return 0;
}