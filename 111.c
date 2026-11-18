#include <stdio.h>
void firstNegative(int a[], int n, int k)
{int i, j, found;
    for(i = 0; i <= n-k; i++)
    {   found = 0;
        for(j = i; j < i+k; j++)
        { if(a[j] < 0)
            {
                printf("%d ", a[j]);
                found = 1;
                break;
            }
        }
        if(found == 0)
        {
            printf("0 ");
        }
    }
}
int main()
{int a[100], n, k, i;
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
        firstNegative(a, n, k);
    return 0;
}