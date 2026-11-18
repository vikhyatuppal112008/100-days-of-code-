#include <stdio.h>
int findCeil(int arr[], int n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] >= x)
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int arr[100];
    int n, x, i;
    int index;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter sorted array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter x: ");
    scanf("%d", &x);
    index = findCeil(arr, n, x);
    printf("%d", index);
    return 0;
}