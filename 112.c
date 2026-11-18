#include <stdio.h>
int kadane(int a[], int n)
 {  int i;
    int sum = a[0];
    int max = a[0];
    for(i = 1; i < n; i++)
    {
        if(sum + a[i] > a[i])
            sum = sum + a[i];
        else
            sum = a[i];

        if(sum > max)
            max = sum;
    }
    return max;
}
int main()
{
    int a[100], n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if(n < 1 || n > 100)
        return 0;
    printf("Maximum sum = %d", kadane(a, n));
    return 0;
}