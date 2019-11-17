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

int decomposition(int val, int *x)
{
    int c=1;
    int d=2;
    while (c<d)
    {
        if (x[val] == val)
        {
            printf("%d\n",val);
            return(0);
        }
        else
        {
            printf("%d * ", x[val]);
            val=val/x[val];
        }
    }

}

int main(int argc, char * argv[])
{
    int t[TAILLE];
    
    
    int val;
    scanf("%d", &val);
    
    if(crible(t)!=0)
    {
        return(3);
    }
    
    crible(t);
    crible2(t);
    decomposition(val,t);
    return(0);
}