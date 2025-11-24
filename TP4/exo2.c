#include <stdio.h>

void afficher_menu() {
    printf("\n DISTRIBUTEUR DE BILLETS \n");
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

void calcul_distribution(int montant) {

    int b50 = montant / 50;
    montant %= 50;

    int b20 = montant / 20;
    montant %= 20;

    int b10 = montant / 10;
    montant %= 10;

    int b5 = montant / 5;

    printf("Distribution :\n");
    printf("Billets de 50 : %d\n", b50);
    printf("Billets de 20 : %d\n", b20);
    printf("Billets de 10 : %d\n", b10);
    printf("Billets de 5  : %d\n", b5);
}

int main() {

    int choix = 0;

    while (choix != 2) {

        afficher_menu();
        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) {

            int montant = saisir_montant();

            if (montant_valide(montant)) {
                calcul_distribution(montant);
            }

        } else if (choix != 2) {
            printf("Choix invalide.\n");
        }
    }

    printf("Fin du programme.\n");
    return 0;
}
