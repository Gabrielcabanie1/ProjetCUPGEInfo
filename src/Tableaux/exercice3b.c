#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAILLE 10

void trouve_candidat(int *t, int * candidat)
{
    int maj;
    for (int j=0;j<TAILLE;j++)
    {
        if (maj==0)
        {
            maj =1;
            *candidat=t[j];
        }
        else
        {
            if (t[j]==*candidat)
            {
                maj=maj+1;
            }
            else
            {
               maj=maj-1; 
            }
        }
     }
}


int verifie_candidat(int *t,int candidat)
{
    int compteur=0;
    for (int k=0;k<TAILLE;k++)
    {
        if (t[k]==candidat)
        {
            compteur=compteur+1;
        }
    }
    
    if (compteur>(TAILLE/2))
    {
        printf("%d est le SAUCE majoritaire !\n",candidat);
    }
    else
    {
        printf("Y a pas de SAUCE majoritaire !\n");
    }
    return(0);
}

int main(int argc, char * argv[])
{
    srand(time(NULL)); //obligatoire sinon sort une valeur aléatoire toujours identique
    
    int n=0;
    
    scanf("%d\n",&n);
    
    int t[TAILLE];
    int maj=0;
    int candidat=0;
    int *pcandidat=&candidat;
    int compteur=0;
    
    for (int i=0;i<TAILLE;i++)
    {
        int nombre_aleatoire;
        nombre_aleatoire=rand()%(n);
        t[i]=nombre_aleatoire;
        printf("%d\n",t[i]);
    }
    trouve_candidat(t,pcandidat);
    verifie_candidat(t,candidat);
    
    
    
    
    return(0);
}