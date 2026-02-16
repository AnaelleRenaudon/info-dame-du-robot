#include <stdio.h>

int main() {
    // Déclaration des variables 
    int nombre1, nombre2, resultat;

    // Affichage du message d'accueil 
    printf("--- Ma Calculatrice en C ---\n");

    // Saisie des nombres 
    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &nombre2);

    // Calcul de l'addition 
    resultat = nombre1 + nombre2;

    // Affichage du résultat
    printf("Le resultat de l'addition est : %d\n", resultat);

    return 0;
}