
#include <stdio.h>

void findRepeat(int a[], int n)
{
    int freq[101] = {0};
    int i;

    for (i = 0; i < n; i++)
    {
        freq[a[i]]++;

        if (freq[a[i]] == 2)
        {
            printf("Repeated element = %d", a[i]);
            return;
        }
    }

    printf("No repeated element");
}

int main()
{
    int a[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    findRepeat(a, n);

    return 0;
}