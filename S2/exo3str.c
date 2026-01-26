#include "biblio.h"
#include <stdio.h>

typedef struct Livre Livre;

void afficherInfoLivre(Livre l)
{
    printf("titre : %s \nauteur : %s\nannee prod : %d\n\n", l.titre, l.auteur, l.anneeProd);
}
