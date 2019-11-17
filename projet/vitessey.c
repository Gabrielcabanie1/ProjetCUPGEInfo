#include <stdlib.h>
#include <stdio.h>
//#include <main.h>
#include <ctype.h>

int vitesse_y(int (*point).x,int (*point).y,int (*point).z,p)
{
    int res= (point->x) * (p * (point->z))-(point->y);
    return(res);
}