#include <stdio.h>
int findPivot(int arr[], int n)
{int i, j;
    int leftSum, rightSum;
    for(i = 0; i < n; i++)
    {
        leftSum = 0;
        rightSum = 0;
        for(j = 0; j < i; j++)
        {
            leftSum = leftSum + arr[j];
        }
        for(j = i + 1; j < n; j++)
        {
            rightSum = rightSum + arr[j];
        }
        if(leftSum == rightSum)
        {
            return i;
        }
    }
    return -1;
}
int main()
{int arr[100];
    int n, i;
    int result;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    result = findPivot(arr, n);
    printf("Pivot index = %d", result);
    return 0;
}