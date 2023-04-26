#include<stdio.h>
void quicksort(int arr[],int first,int last)
{
    int r,temp1,temp2,l=0;
    int i=first;
    int j=last;
    int pivot=arr[0];
    for (r = i+1; r <= j; r++)
    {
       if(pivot>arr[r])
       {
            l++;
            temp1= arr[l];
            arr[l]=arr[r];
            arr[r]=temp1;
       }
    }
    temp2=arr[l];
    arr[l]=pivot;
    pivot=temp2; 
    for (int k = 0; k<=last; k++)
    {
        printf("%d  ",arr[k]);
    }
}
int main()
{
    int arr[]={34,23,53,5,65,3,88,49,70}; 
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,0,n-1);
    return 0;
}