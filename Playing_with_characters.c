#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char c;
    char s[20];
    char sen[30];
    scanf("%c", &c);
    scanf("%s", &s);
    scanf("%[^\n]%*s", &sen);
    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s\n", sen);
}
// #include <stdio.h>
// int main()
// {
//     char ch, s[50], sen[50];
//     scanf("%c", &ch);
//     scanf("%s \n", &s);
//     scanf("%[^\n]%*s", &sen);
//     printf("%c\n", ch);
//     printf("%s\n", s);
//     printf("%s\n", sen);
//     return 0;
// }