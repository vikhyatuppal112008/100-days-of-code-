
#include <stdio.h>
void twoSum(int a[], int n, int target)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                printf("%d %d", i, j);
                return;
            }
        }
    }
    printf("-1 -1");
}

int main()
{
    int a[100], n, target, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    twoSum(a, n, target);

    return 0;
}