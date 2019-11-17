#include <stdio.h>
#include <stdlib.h>

void contenu(int *t,int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",t[i]);
    }
    printf("\n");
}


void echange(int *i1, int *i2) //i1 et i2 sont les adresses des cases du tableau!
{
    int intermediaire=0;
    intermediaire = *i2;
    *i1=*i2;
    *i2=intermediaire;
}

void maxf(int *t,int n, int *max)
{
    for (int i=0;i<n;i++)
    {
        if (t[i]>*max)
        {
            *max=i; 
        }
    }
}

void tri(int *t, int n, int *max)
{
    for (int i=0;i<n;i++)
    {
        maxf(t,n,max);
        echange(&t[n],&t[*max]);
        n=n-1;
    }

    
}

int main(int argc, char * argv[])
{
    int max=0;
    int t1[5]={75,12,56,7,4};
    contenu(t1,5);
    tri(t1,5,&max);
    contenu(t1,5);
}