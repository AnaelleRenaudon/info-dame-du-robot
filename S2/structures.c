#include "structures.h"
#include <stdio.h>
#include <string.h>

int main()
{
    struct Personne p1;
    p1.age = 12;
    p1.poids = 35;
    p1.taille = 1.5;
    strcpy(p1.prenom, "jean");

    printf("%d %f %f %s",p1.age, p1.poids ,p1.taille, p1.prenom );

}