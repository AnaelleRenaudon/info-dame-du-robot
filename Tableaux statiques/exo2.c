#include <stdio.h>

// Fonction pour trouver le plus grand nombre dans le tableau
float trouverMax(float tableau[], int taille) {
    float max = tableau[0];
    for (int i = 1; i < taille; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    return max;
}

int main() {
    // Créer un tableau statique de nombres flottants
    float tableau[] = {3.14, 2.71, 1.41, 4.67, 0.58, 9.81, 6.28};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Trouver le plus grand nombre
    float max = trouverMax(tableau, taille);

    // Afficher le résultat
    printf("Le plus grand nombre dans le tableau est : %.2f\n", max);

    return 0;
}
