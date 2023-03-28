#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    int arr[10] = {0};
    char c[1000];
    fgets(c, sizeof(c), stdin);
    int l = strlen(c);
    for (int i = 0; c != '\0'; i++)
    {
        if (c[i] >= '0' && c[i] <= '9')
        {
            arr[c[i] - '0'];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}