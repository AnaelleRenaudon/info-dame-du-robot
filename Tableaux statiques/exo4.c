#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    int cars[5] = { 0, 0, 0, 0, 0 };  // Positions des voitures
    int distance;
    int maxDistance = 50;  // Distance maximale de la course pour affichage
    srand(time(NULL));
    int gagnant = 0;
    int winner[5] = {0, 0, 0, 0, 0};

    // Simulation de 10 tours de course
    for (int tour = 1; tour <= 10 && gagnant == 0; tour++) {
        printf("Tour %d :\n", tour);

        for (int i = 0; i < 5; i++) {
            distance = rand() % 10 + 1;  // Distance aléatoire entre 1 et 10
            cars[i] += distance;         // Mise à jour de la position de la voiture

            if (cars[i] >= 50) {
                cars[i] = 50;
                winner[gagnant] = i + 1;
                gagnant++;
            }

            // Affichage graphique
            printf("|");  // Ligne de départ
            for (int pos = 1; pos <= maxDistance; pos++) {
                if (pos == cars[i]) {
                    printf(">");
                } else {
                    printf(" ");
                }
            }
            printf("|\n");
        }

        printf("\n");
        Sleep(1000);
    }

    // Détermination de la voiture gagnante
    for (int i = 0; i < 5; i++) {
        if (winner[i] != 0) {
            if (gagnant > 1)
                printf("La voiture %d est gagnante ex aequo !\n", winner[i]);
            else
                printf("La voiture gagnante est la voiture %d !\n", winner[i]);
        }
    }

    return 0;
}