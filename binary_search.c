#include <stdio.h>
int bs(int arr[], int a, int b, int val)
{
    if (b >= a)
    {
        int mid = (a + b) / 2;
        if (arr[mid] == val)
        {
            return mid + 1;
        }
        else if (arr[mid] < val)
        {
            return bs(arr, mid + 1, b, val);
        }
        else
        {
            return bs(arr, a, mid - 1, val);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int val = 17;
    int n = sizeof(arr) / sizeof(arr[0]);
    int value = bs(arr, 0, n - 1, val);

    printf("Elements of array are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
    printf("elment to found is =  %d\n", val);
    if (value == -1)
    {
        printf("element not found\n");
    }
    else
    {
        printf("element founded on %d place\n", value);
    }
    return 0;
}