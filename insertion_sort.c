#include <stdio.h>
int main()
{
    int arr[5], temp, j;
    printf("Enter 5 Elements in array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element after insertion sort\n");
    for (int i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            printf("%d  ", arr[j]);
        }
        printf("\n");
    }

    for (int k = 0; k < 5; k++)
    {
        printf("%d  ", arr[k]);
    }
    return 0;
}