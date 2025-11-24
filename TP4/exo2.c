#include <stdio.h>

void afficher_menu() {
    printf("\n--- DISTRIBUTEUR DE BILLETS ---\n");
    printf("1. Retirer un montant\n");
    printf("2. Quitter\n");
}

int saisir_montant() {
    int montant;
    printf("\nEntrez un montant : \n");
    scanf("%d", &montant);
    return montant;
}

int montant_valide(int montant) {

    if (montant <= 0) {
        printf("Erreur : le montant doit etre positif.\n");
        return 0;
    }

    if (montant > 1000) {
        printf("Erreur : le montant maximum est 1000€.\n");
        return 0;
    }

    if (montant % 5 != 0) {
        printf("Erreur : le montant doit etre un multiple de 5.\n");
        return 0;
    }

    return 1;
}
