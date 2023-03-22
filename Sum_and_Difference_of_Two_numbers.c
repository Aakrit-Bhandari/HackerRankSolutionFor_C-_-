#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    float c, d;
    scanf("%f %f", &c, &d);
    int sum = a + b;
    int diff = abs(a - b);
    float sam = c + d;
    float daff = c - d;
    printf("%d %d\n", sum, diff);
    printf("%0.1f %0.1%f", sam, daff);
}