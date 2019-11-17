#include <stdio.h>

int main(int argc, char *argv[])
{
    int* memoireAllouee = NULL;

    memoireAllouee = malloc(sizeof(int)); // malloc : demande d'allocation de mémoire
    if (memoireAllouee == NULL) // Si l'allocation a échoué
    {
        exit(0); // On arrête immédiatement le programme
    }

    // On peut continuer le programme normalement sinon
    
    //La mémoire est utilisable ici
    free(memoireAllouee); // On n'a plus besoin de la mémoire, on la libère

    return 0;
}