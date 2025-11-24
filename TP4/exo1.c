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
    int n = 0;
    int resultat;
    
    while (n < 1 || n > 30) {
        printf("Saisissez un nombre d'eleves entre 1 et 30 : ");
        resultat = scanf("%d", &n);
        
        if (n < 1 || n > 30) {
            printf("Erreur : le nombre doit etre entre 1 et 30.\n");
        }
    }

    return n;
}

void saisirNotes(float t[][3], int nb) {
    for (int i = 0; i < nb; i++)
        for (int j = 0; j < 3; j++) {
             {
                printf("Eleve %d C%d : ", i + 1, j + 1);
                scanf("%f", &t[i][j]);
            } while (t[i][j] < 0 || t[i][j] > 20);
        }
    return 0;
}

int afficherNotes(float t[][3], int nb) {
    printf("\nEleve  C1   C2   C3\n");
    for (int i = 0; i < nb; i++)
        printf("%3d   %.1f %.1f %.1f\n",
               i + 1, t[i][0], t[i][1], t[i][2]);
    return 0;
}


