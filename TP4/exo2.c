#include <stdio.h>

void afficher_menu() {
    printf("\n--- DISTRIBUTEUR DE BILLETS ---\n");
    printf("1. Retirer un montant\n");
    printf("2. Quitter\n");
}

int saisir_montant() {
    int montant;
    printf("Entrez un montant : ");
    scanf("%d", &montant);
    return montant;
}

