#include <stdio.h>
int main()
{
    int arr[5], temp, j;
    printf("Enter elements of array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Element after insertion sort\n");
    for (int i = 0; i < 5; i++)
    {
        for (j = i+1; j<5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int k = 0; k < 5; k++)
    {
        printf("%d  ", arr[k]);
    }
    return 0;
}