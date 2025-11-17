#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIGNES 5
#define COLONNES 5

int main() {

    srand(time(NULL));

    float matrice[LIGNES][COLONNES];

    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            matrice[i][j] = (float)rand() / (float)RAND_MAX * 100;
        }
    }

    printf("Matrice 5x5 remplie avec des valeurs aleatoires :\n");
    for (int i = 0; i < LIGNES; i++) {
        for (int j = 0; j < COLONNES; j++) {
            printf("%.2f ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
