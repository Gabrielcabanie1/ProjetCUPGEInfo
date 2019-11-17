#include <stdio.h>
int main(int argc, char *argv[])
{
    /*printf("%d\n",argc); //argc affiche le nombre de mots contenus dans argv
    printf("%s\n",argv[0]); //argv affiche les différents mots qui sont appelés 
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);*/
    int i;
    
    for(i=0 ; i<argc ; i++)
    {
        printf("%s\n",argv[i]);
    }
    
    for(i=argc+1 ; i<10 ; i++)
    {
        printf("%s\n",argv[i]);
    }
    return(0);
}