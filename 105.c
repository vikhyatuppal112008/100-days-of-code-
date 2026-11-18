#include <stdio.h>
int findMajority(int arr[], int n)
{
    int i, j;
    int count;

    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > n / 2)
        {
            return arr[i];
        }
    }

    return -1;
}
int main()
{
    int arr[100];
    int n, i;
    int result;
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    result = findMajority(arr, n);
    printf("Majority element = %d", result);
    return 0;
}