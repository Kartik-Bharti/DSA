#include <stdio.h>
void toh(int n, char A, char B, char C)
{
    if (n == 0)
    {
        printf("value of 'n' must be grater than 0");
    }
    else if (n == 1)
    {
        printf("Moved disk %d from %c to %c\n", n, A, C);
    }
    else
    {
        toh(n - 1, A, C, B);
        printf("moved disk %d from %c to %c\n", n, A, C);
        toh(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    printf("Enter value of n\n");
    scanf("%d", &n);
    toh(n, 'a', 'b', 'c');
    return 0;
}