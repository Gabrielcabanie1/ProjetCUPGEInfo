#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAILLE 10

int main(int argc, char * argv[])
{
    srand(time(NULL)); //obligatoire sinon sort une valeur aléatoire toujours identique
    
    int n=0;
    
    scanf("%d\n",&n);
    
    int t[TAILLE];
    int maj=0;
    int val_maj=0;
    int compteur=0;
    
    for (int i=0;i<TAILLE;i++)
    {
        int nombre_aleatoire;
        nombre_aleatoire=rand()%(n);
        t[i]=nombre_aleatoire;
        printf("%d\n",t[i]);
    }
    for (int j=0;j<TAILLE;j++)
    {
        if (maj==0)
        {
            maj =1;
            val_maj=t[j];
        }
        else
        {
            if (t[j]==val_maj)
            {
                maj=maj+1;
            }
            else
            {
               maj=maj-1; 
            }
        }
    }
    for (int k=0;k<TAILLE;k++)
    {
        if (t[k]==val_maj)
        {
            compteur=compteur+1;
        }
    }
    
    if (compteur>(TAILLE/2))
    {
            printf("%d est le SAUCE majoritaire !\n",val_maj);
    }
    else
    {
        printf("Y a pas de SAUCE majoritaire !\n");
    }
    
    return(0);
}