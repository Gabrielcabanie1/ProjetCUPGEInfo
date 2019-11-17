#include <stdio.h>
int main(int argc, char *argv[])
{
    char c;
    scanf("%c",&c);
    if ((c>='0') && ( c<='9'))
    {
        printf("%d est un chiffre\n", c);
    }
    if ((c>='a') && (c<='z'))
    {
        printf("%c est une lettre minsucule\n", c);
    }
    if ((c>='A') && (c<='Z'))
    {
        printf("%c est une lettre majuscule\n", c);
    }
    return(0);
}