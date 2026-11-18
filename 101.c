#include <stdio.h>
void findOccurrence(int arr[], int n, int target)
{
    int first = -1;
    int last = -1;
    int i;
    for(i = 0; i < n; i++)
    { if(arr[i] == target)
        {
            if(first == -1)
            {
                first = i;
            }

            last = i;
        }
    }
    printf("%d %d", first, last);
}
int main()
{
    int arr[100];
    int n, target, i;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter sorted array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    findOccurrence(arr, n, target);
    return 0;
}