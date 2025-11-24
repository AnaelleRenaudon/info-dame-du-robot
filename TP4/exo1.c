#include <stdio.h>


int afficherMenuNotes() {
    printf("\n--- MENU NOTES ---\n");
    printf("1. Saisir nombre d'eleves\n");
    printf("2. Saisir notes\n");
    printf("3. Afficher notes\n");
    printf("4. Moyenne d'un eleve\n");
    printf("5. Moyenne generale\n");
    printf("6. Meilleures notes\n");
    printf("7. Retour\n");
    return 0;
}

int lireChoix() {
    int x;
    scanf("%d", &x);
    return x;
}

int saisirNombreEleves() {
    int n;
     {
        printf("Saisissez un nombre d'eleves entre 1 et 30  ");
        scanf("%d", &n);
    } while (n < 1 || n > 30);
    return n;
}

int saisirNotes(float t[][3], int nb) {
    for (int i = 0; i < nb; i++)
        for (int j = 0; j < 3; j++) {
             {
                printf("Eleve %d C%d : ", i + 1, j + 1);
                scanf("%f", &t[i][j]);
            } while (t[i][j] < 0 || t[i][j] > 20);
        }
    return 0;
}
