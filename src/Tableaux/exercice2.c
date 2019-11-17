#include <stdio.h>
#define TAILLE 100000

int crible(int * x)
{
    x[0]=0;
    x[1]=1;
    for(int i=2; i<TAILLE; i++)
    {
        x[i]=i;
    }
    return(0);
}
    
int crible2(int * x)
{
    for(int i=2; (i*i)<TAILLE; i++)
    {
        if (x[i] == i)
        {
            for(int j=2; (j*i)<TAILLE; j++)
            {
                x[i*j]=i;
            }
        }
    }
    return(0);
}

int main(int argc, char * argv[])
{
    int t[TAILLE];
    
    
    int a,b;
    a=1;
    b=2;
    
    if(crible(t)!=0)
    {
        return(3);
    }
    
    crible(t);
    crible2(t);
    while (a<b)
    {
        int val;
        scanf("%d", &val);
        if (val<0)
        {
            break;
        }
        if (val>=TAILLE)
        {
            continue;
        }
        else
        {
            if (t[val]==val)
            {
                printf("Cet entier est premier !\n");
            }
            if (t[val]!=val)
            {
                printf("Cet entier n'est pas premier ! Voici son PGDP : %d\n",t[val]);
            }
        }
    }
    
    return(0);
}