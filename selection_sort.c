#include <stdio.h>
int main()
{
    int temp;
    int arr[] = {238, 54, 35, 345, 34, 5, 2, 25, 76, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Elements of array are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    printf("Elements after selection sort is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}