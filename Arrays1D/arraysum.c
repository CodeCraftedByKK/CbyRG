// sum of array

#include <stdio.h>
int main()
{

    printf("How many number you want to enter?\n");
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d2", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum is %d", sum);

    return 0;
}