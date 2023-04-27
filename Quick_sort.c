// Quick sort in C
#include <stdio.h>

// function to swap elements
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partiationalgo(int arr[], int i, int j)
{
    int r, l = 0;
    int pivot = arr[i];
    for (r = j; r > 0; r--)
    {
        if (pivot > arr[r])
        {
            l++;
            swap(&arr[l], &arr[r]);
        }
    }
    swap(&arr[l], &pivot);
    return l;
}

void quicksort(int arr[], int i, int j)
{
    if (i < j)
    {
        int pi = partiationalgo(arr, i, j);
        // recursive call on the left of pivot
        quicksort(arr, i, pi - 1);
        // recursive call on the right of pivot
        quicksort(arr, pi + 1, j);
    }
}

// function to print array elements
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {8, 7, 2, 1, 0, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted Array\n");
    printArray(arr, n);
    quicksort(arr, 0, n - 1);
    printf("Sorted array in ascending order: \n");
    printArray(arr, n);
    return 0;
}
