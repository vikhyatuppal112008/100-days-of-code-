#include <stdio.h>

int kthSmallest(int a[], int n, int k)
{
    int i, j, temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    return a[k-1];
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
        printf("Kth smallest = %d",
               kthSmallest(a, n, k));
    return 0;
}