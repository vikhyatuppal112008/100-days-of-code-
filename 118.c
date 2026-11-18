
#include <stdio.h>
void missingNumber(int a[], int n)
{
    int sum = 0, total, i;
    total = n * (n + 1) / 2;

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Missing number = %d", total - sum);
}

int main()
{
    int a[100], n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    missingNumber(a, n);
    return 0;
}