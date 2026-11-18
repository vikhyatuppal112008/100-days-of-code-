#include <stdio.h>
int maxSum(int a[], int n, int k)
{int i, j, sum, max = 0;

    for(i = 0; i < k; i++)
    {
        max = max + a[i];
    }
    for(i = 1; i <= n-k; i++)
    {
        sum = 0;
        for(j = i; j < i+k; j++)
        {
            sum = sum + a[j];
        }
        if(sum > max)
        {
            max = sum;
        }
    }
    return max;
}

int main()
{
    int a[100], n, k, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if(k < 1 || k > n)
        printf("Invalid k");
    else
        printf("Maximum sum = %d", maxSum(a, n, k));

    return 0;
}