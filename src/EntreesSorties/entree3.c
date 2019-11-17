#include <stdio.h>
#include "../../include/entrees.h"

void lire_decimal(float *f)
{
    float p,nb;
    do
    {
        p=scanf("%f",f);
        nb= lire_fin_ligne();
    }while((p!=1) || nb != 0);
    if (p==1)
    {
        printf("On a un décimal");
    }
    
}