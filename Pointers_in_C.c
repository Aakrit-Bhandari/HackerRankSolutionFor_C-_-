#include <stdio.h>
#include <stdlib.h>
int Pointer(int *a, int *b)
{
    int sum = *a + *b;
    int diff = *a - *b;
    *a = sum;
    *b = diff;
}
int main(void)
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    Pointer(&a, &b);
    printf("%d\n%d", a, b);
}