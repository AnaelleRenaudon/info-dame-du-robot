#include <stdio.h>
#include "exo1.h"

void ecrire_nombres_dans_fichier() {
    int a, b, c;

    printf("Entrez un premier nombre : ");
    scanf("%d", &a);

    printf("Entrez un deuxieme nombre : ");
    scanf("%d", &b);

    printf("Entrez un troisieme nombre : ");
    scanf("%d", &c);

    FILE *f = fopen("nbre.txt", "w");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return;
    }

    fprintf(f, "%d\n", a);
    fprintf(f, "%d\n", b);
    fprintf(f, "%d\n", c);

    fclose(f);

    printf("Les nombres ont ete ecrits dans nbre.txt.\n");
}