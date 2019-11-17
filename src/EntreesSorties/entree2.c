#include <stdio.h>
#include "../../include/entrees.h"

void lire_entier(int *f)
{
    int p,nb;
    do
    {
        p = scanf("%d",f);
        nb = lire_fin_ligne();
    }while((p!=1) || nb != 0);
    if (p==1)
    {
        printf("On a un entier");
    }
}