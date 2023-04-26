#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int t,k,arr[n];
    printf("enter elements\n");
    for (k = 0; k < n; k++)
    {
        scanf("%d" ,&arr[k]);
    }
    printf("Elements after bubble sort are \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}