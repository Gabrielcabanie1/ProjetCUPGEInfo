#include <stdlib.h>
#include <stdio.h>
//#include <main.h>
#include <ctype.h>

int vitesse_x(Coordonnees* point) // on est obligé de mettre des parenthèse sinon le . s'applique que pour point, et pas pour *point
											   		//attention ici car je suis pas sur que ça corresponde a la bonne notation pour mettre l'adresse dans la fonction
{
    int res= sigma * ((point->y)-(point->x)); // les -> permettent de remplacer le (*point).x,  donc [(*point).x = 0;] = [point->x = 0;]
    return(res);
}