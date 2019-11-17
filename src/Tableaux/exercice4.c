#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAILLE 100000

void contenu(unsigned char *t,int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d ",t[i]);
    }
    printf("\n");
}

void additionneur(unsigned char *resultat, unsigned char *retenue, unsigned char u1, unsigned char u2)
{
    int somme=0;
    int valeur=0;
    somme=u1+u2+ *retenue;
    
    
    if (somme<256)
    {
        *resultat=somme;
        *retenue=0; //pas sur que ça serve ici
    }
    *retenue=0;

    if (somme>=256)
    {
        while (somme>=256)
        {
            somme=somme-256;
            *retenue=*retenue+1;
        }
        
        *resultat=somme;
        
    }
}

int main(int argc, char * argv[])
{
    unsigned char t1[10] = {56,125,234,12,124,0};
    unsigned char t2[10] = {34,131,20,244,200,0};
    unsigned char t3[10]={0};
    
    unsigned char resultat =0;
    unsigned char retenue =0;
    
    int n=10;
    contenu(t1,n);
    contenu(t2,n);
    contenu(t3,n);
    
    for (int i=0;i<n;i++)
    {
        additionneur(&resultat, &retenue, t1[i],t2[i]);
        t3[i]=resultat;
    }
    contenu(t3,n);
    
    return(0);
}