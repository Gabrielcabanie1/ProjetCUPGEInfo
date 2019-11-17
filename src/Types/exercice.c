#include <stdio.h>
int main(int argc, char * argv[])
{
    int x[3];
    int a=x[0];
    int b=x[1];
    int c=x[2];
    /*printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&c);
    printf("%ld\n",&c - &b);
    printf("%p\n",&x);
    printf("%ld\n",sizeof(x));
    printf("%ld\n",sizeof(&x));*/
    for (int i=0;i<=3;i++)
    {
        int y[i];    
        printf("%ld\n",y[i]);
        printf("%\n",*(x+i));
        printf("%p\n",&x[i]);
        printf("%ld\n",x+i);
    }
}