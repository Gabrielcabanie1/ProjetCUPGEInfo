#include <stdlib.h>
#include <stdio.h>
#include main.h

typedef struct Coordonnees Coordonnees; //permet d'écrire direct Coordonnees au lieu de struct Coordonees, permet d'aller plus vite
struct Coordonnees //l'idée est de créer cette structure qui va faire varier les valeurs de x,y et z puis les placer dans un tableau dynamique a chaque nouvelle coordonées
{
    int x;
    int y;
    int z;
};

//ATTENTION pas sur pour les derivvees, a voir si je manipule bien les valeuurs ou les addresses !!!
//De plus, ces fonctions sont vouées à aller dans un nouveau fichier, pour utiliser MakeFile
int vitesse_x(int (*point).x,int (*point).y,sigma) // on est obligé de mettre des parenthèse sinon le . s'applique que pour point, et pas pour *point
													//attention ici car je suis pas sur que ça corresponde a la bonne notation pour mettre l'adresse dans la fonction
{
    int res= sigma * ((point->y)-(point->x)); // les -> permettent de remplacer le (*point).x,  donc [(*point).x = 0;] = [point->x = 0;]
    return(res);
}

int vitesse_y(int (*point).x,int (*point).y,int (*point).z,p)
{
    int res= (point->x) * (p * (point->z))-(point->y);
    return(res);
}

int vitesse_z(int (*point).x,int (*point.y),int (*point.z),B)
{
    int res= ((point->x) * (point->y)-(point->z) * B);
    return(res);
}

int main(int argc, char *argv[])
{
    Coordonnees point; //on initialise la variabe point qui est de type Coordonnees, contenant x, y et z
    //point.x permet d'acceder a la coordonees x qui est dans le type
    int *adresseP = &point //contient l'adresse de point au cas ou
    
    int nb_periode=0;
    int* tab_pos = NULL;
    int val_periode=0;
    int tmax=0;
    
    int x0;
    int y0;
    int z0;
    
    int sigma = 10;
    int B = 8/3;
    int p = 28;
    
    printf("Combien vaut tmax ?");
    scanf("%d", &tmax);
    
    printf("Quel est la valeur de la periode ?");
    scanf("%d", &val_periode);
    
    nb_periode= tmax/(val_periode);
    
    printf("Quelles sont les coordonnees initiales en x ?");
    scanf("%d", &x0);
    
    printf("Quelles sont les coordonnees initiales en y ?");
    scanf("%d", &y0);
    
    printf("Quelles sont les coordonnees initiales en z ?");
    scanf("%d", &z0);
    
    Coordonnees point = {x0, y0, z0};
    
    tab_pos = malloc((nb_periode)*sizeof(int)); //voir fonctionnement de realloc dans le cours si on veut changer la taille du tableau entre temps
    if (tab_pos == NULL) // Si l'allocation a échoué
    {
        exit(0); // On arrête immédiatement le programme
    }
    
    tab[0]=point;
    
    for (int i=1;i<=nb_periode;i++)
    {
           point.x = point.x+((vitesse_x(point.x,point.y,sigma)) * val_periode);
           point.y = point.y+((vitesse_y(point.x,point.y,point.z,p)) * val_periode);
           point.z = point.z+((vitesse_z(point.x,point.y,point.z,B)) * val_periode);
           tab[i]=point; //on va remplir le tableau avec les points pour stocker chaque position, on vverra ensuite coment les afficher avec la foonction demandée
    }
    return(0);
}