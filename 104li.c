#include <stdio.h>
int findPivotInteger(int n)
{
    int x, i;
    int leftSum, rightSum;

    for(x = 1; x <= n; x++)
    {
        leftSum = 0;
        rightSum = 0;

        for(i = 1; i < x; i++)
        {
            leftSum = leftSum + i;
        }

        for(i = x + 1; i <= n; i++)
        {
            rightSum = rightSum + i;
        }

        if(leftSum == rightSum)
        {
            return x;
        }
    }

    return -1;
}

int main()
{
    int n;
    int result;
    printf("Enter n: ");
    scanf("%d", &n);

    result = findPivotInteger(n);

    printf("Pivot integer = %d", result);

    return 0;
}