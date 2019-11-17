#include <stdio.h>
int main(int argc, char * argv[])
{
    
    int *p4 = t;
    //int *p1=(int*)(t+1);
    //int *p2=(int*)(&t+t)-1;
    //*(t+2)=p1[1]-t[0];
    //p2[-2]=p1[1];
    //printf("%p\n", t);
    //printf("%p\n", t+1);
    //printf("%p\n", p1);
    //printf("%p\n", &p1);
    //printf("%p\n", t+2);
    //printf("%p\n", p2);
    //printf("%p\n", &p2);
    //printf("%d\n", *p1);
    //printf("%d %d %d\n", t[0],t[1],t[2]);
    printf("%d\n",*p4);
    printf("%p\n",&p4);
    return(0);
}