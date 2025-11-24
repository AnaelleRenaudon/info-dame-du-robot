#include <stdio.h>

void afficherMenu() {
    printf("\n--- MENU NOTES ---\n");
    printf("1. Saisir nombre d'eleves\n");
    printf("2. Saisir notes\n");
    printf("3. Afficher notes\n");
    printf("4. Moyenne d'un eleve\n");
    printf("5. Moyenne generale\n");
    printf("6. Meilleures notes\n");
    printf("7. Quitter\n");
}

int lireChoix() {
    int choix;
    scanf("%d", &choix);
    return choix;
}

int saisirNombreEleves() {
    int n = 0;

    while (n < 1 || n > 30) {
        printf("Entrez le nombre d'eleves (1-30) : ");
        scanf("%d", &n);

        if (n < 1 || n > 30) {
            printf("Valeur incorrecte.\n");
        }
    }

    return n;
}

void saisirNotes(float notes[][3], int nb) {
    int i, j;
    float x;

    for (i = 0; i < nb; i++) {
        for (j = 0; j < 3; j++) {

            x = -1;
            while (x < 0 || x > 20) {
                printf("Eleve %d - C%d : ", i + 1, j + 1);
                scanf("%f", &x);

                if (x < 0 || x > 20) {
                    printf("Note invalide.\n");
                }
            }

            notes[i][j] = x;
        }
    }
}

void afficherNotes(float notes[][3], int nb) {
    int i;

    printf("\nEleve  C1   C2   C3\n");

    for (i = 0; i < nb; i++) {
        printf("%3d   %.1f %.1f %.1f\n",
               i + 1, notes[i][0], notes[i][1], notes[i][2]);
    }
}

float calculerMoyenneEleve(float notes[][3], int indice) {
    return (notes[indice][0] + notes[indice][1] + notes[indice][2]) / 3.0f;
}

float calculerMoyenneGenerale(float notes[][3], int nb) {
    float somme = 0;
    int i;

    for (i = 0; i < nb; i++) {
        somme += calculerMoyenneEleve(notes, i);
    }

    return somme / nb;
}

float trouverMeilleureNoteControle(float notes[][3], int nb, int c) {
    float max = notes[0][c];
    int i;

    for (i = 1; i < nb; i++) {
        if (notes[i][c] > max) {
            max = notes[i][c];
        }
    }

    return max;
}

void afficherMeilleuresNotes(float notes[][3], int nb) {
    printf("Meilleures notes :\n");
    printf("C1 : %.1f\n", trouverMeilleureNoteControle(notes, nb, 0));
    printf("C2 : %.1f\n", trouverMeilleureNoteControle(notes, nb, 1));
    printf("C3 : %.1f\n", trouverMeilleureNoteControle(notes, nb, 2));
}

int main() {

    float notes[30][3] = {0};
    int nbEleves = 0;
    int choix = 0;

    while (choix != 7) {

        afficherMenu();
        printf("Votre choix : ");
        choix = lireChoix();

        if (choix == 1) {
            nbEleves = saisirNombreEleves();
        }

        else if (choix == 2) {
            if (nbEleves > 0) {
                saisirNotes(notes, nbEleves);
            } else {
                printf("Erreur : saisissez d'abord le nombre d'eleves.\n");
            }
        }

        else if (choix == 3) {
            if (nbEleves > 0) {
                afficherNotes(notes, nbEleves);
            } else {
                printf("Aucune note disponible.\n");
            }
        }

        else if (choix == 4) {
            if (nbEleves > 0) {
                int e;
                printf("Numero de l'eleve : ");
                scanf("%d", &e);

                if (e >= 1 && e <= nbEleves) {
                    float m = calculerMoyenneEleve(notes, e - 1);
                    printf("Moyenne de l'eleve %d : %.2f\n", e, m);
                } else {
                    printf("Eleve invalide.\n");
                }
            }
        }

        else if (choix == 5) {
            if (nbEleves > 0) {
                float mg = calculerMoyenneGenerale(notes, nbEleves);
                printf("Moyenne generale : %.2f\n", mg);
            }
        }

        else if (choix == 6) {
            if (nbEleves > 0) {
                afficherMeilleuresNotes(notes, nbEleves);
            }
        }

        else if (choix != 7) {
            printf("Choix invalide.\n");
        }
    }

    printf("Fin du programme.\n");
    return 0;
}