#include <stdio.h>
int main(int argc, char * argv[])
{
    int y =5;
    int *x = &y;
    printf("%p\n",x);
    printf("%p\n",&y);
    printf("%p\n",&x);
    printf("%d\n",*x);
    printf("%d\n",y);
    
}