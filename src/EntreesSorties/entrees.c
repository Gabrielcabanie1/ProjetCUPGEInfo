#include <stdio.h>
#include <ctype.h>

int lire_fin_ligne()
{
    
    int compteur=0;
    char a;
    a = getchar(); //il renvoie un caractère
    while (a!='\n') // '' pour un caractère, "" pour une chaine de caractère
    {   
        if (isspace(a)==0) //renvoie une valeur autre que 0 si il y a un espace
        {
            compteur=compteur+1;
        }
        a=getchar();
    }
    
    return(compteur);
}

void lire_entier(int *f)
{
    int p,nb;
    do
    {
        p=scanf("%d",f);
        nb= lire_fin_ligne();
    }while((p!=1) || nb != 0);
    if (p==1)
    {
        printf("On a un entier");
    }
    
}

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

int main(int argc, char *argv[])
{
    char *ligne;
    char c;
    int nb_c=0;
    nb_c = lire_fin_ligne();
    printf("%d\n",nb_c);
    
}