#include <stdio.h>
int main(int argc, char * argv[])
{
    int x0,x1,x2=0;
    *(&x0+1)=2;
    *(&x0+2)=4;
    printf("%d %d\n",x1,x2);
    printf("%p\n",&x0);
    printf("%p\n",&x1);
    int x4 = sizeof(char);
    printf("%p\n",x4);
   
    



    
}  