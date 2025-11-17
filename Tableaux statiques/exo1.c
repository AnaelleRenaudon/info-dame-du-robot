//Écrivez un programme qui inverse l'ordre des éléments dans un tableau statique d'entiers.  Créer un tableau d’entier, l’afficher. Inverser le tableau et l’afficher. 
#include <stdio.h>

// Fonction pour afficher le tableau
void afficherTableau(int tableau[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
}

// Fonction pour inverser le tableau
void inverserTableau(int tableau[], int taille) {
    int temp;
    for (int i = 0; i < taille / 2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[taille - 1 - i];
        tableau[taille - 1 - i] = temp;
    }
}

int main() {
    // Créer un tableau statique d'entiers
    int tableau[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Afficher le tableau original
    printf("Tableau original : ");
    afficherTableau(tableau, taille);

    // Inverser le tableau
    inverserTableau(tableau, taille);

    // Afficher le tableau inversé
    printf("Tableau inversé : ");
    afficherTableau(tableau, taille);

    return 0;
}
