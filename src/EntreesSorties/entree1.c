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

