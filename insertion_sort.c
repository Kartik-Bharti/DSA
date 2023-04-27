#include <stdio.h>
int main()
{
    int arr[5] = {23, 45, 3, 667, 1}, temp, j;
    // printf("Enter 5 Elements in array\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
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
    return 0;
}