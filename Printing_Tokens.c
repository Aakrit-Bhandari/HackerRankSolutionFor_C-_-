#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char sen[1000];
    fgets(sen, sizeof(sen), stdin);
    int l = strlen(sen);
    for (int i = 0; i < l; i++)
    {
        if (sen[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", sen[i]);
        }
    }
    return 0;
}