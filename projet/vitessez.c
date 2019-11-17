#include <stdlib.h>
#include <stdio.h>
//#include <main.h>
#include <ctype.h>

int vitesse_z(Coordonnees* point)
{
    int res= ((point->x) * (point->y)-(point->z) * B);
    return(res);
}