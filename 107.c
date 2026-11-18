#include <stdio.h>
void previousGreater(int arr[], int n)
{
    int i, j;
    int greater;
    for(i = 0; i < n; i++)
    {
        greater = -1;

        // Search towards the left
        for(j = i - 1; j >= 0; j--)
        {
            if(arr[j] > arr[i])
            {
                greater = arr[j];
                break;
            }
        }

        printf("%d", greater);

        if(i != n - 1)
        {
            printf(", ");
        }
    }
}

int main()
{
    int arr[100];
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    previousGreater(arr, n);
    return 0;
}