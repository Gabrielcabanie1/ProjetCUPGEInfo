#include <stdio.h>
#define TAILLE 100000

int crible(int * x)
{
    x[0]=0;
    x[1]=0;
    for(int i=2; i<TAILLE; i++)
    {
        x[i]=1;
    }
    return(0);
}
    
int crible2(int * x)
{
    for(int i=0; (i*i)<TAILLE; i++)
    {
        if (x[i] == 1)
        {
            for(int j=2; (j*i)<TAILLE; j++) // prend les multiples du nombre premier et les mets à 0
            {
                x[i*j]=0;
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
    
    if(crible(t)!=0) //vérifie si il n'y a pas eu d'erreur dans crible
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
            if (t[val]==1)
            {
                printf("Cet entier est premier !\n");
            }
            if (t[val]==0)
            {
                printf("Cet entier n'est pas premier !\n");
            }
        }
    }
    
    return(0);
}