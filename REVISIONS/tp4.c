#include <stdio.h>

// Étape 1 : Afficher le menu [cite: 141-146]
void afficherMenu() {
    printf("\n===== GESTION DE NOTES =====\n");
    printf("1. Saisir le nombre d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generale\n");
    printf("6. Afficher la meilleure note de chaque controle\n");
    printf("0. Quitter\n");
}

// Étape 2 : Lire le choix [cite: 152-155]
int lireChoix() {
    int choix;
    printf("Votre choix: ");
    scanf("%d", &choix);
    return choix;
}

// Étape 3 : Saisir le nombre d'élèves (1 à 30) [cite: 157-161]
int saisirNombreEleves() {
    int n;
    do {
        printf("Entrez le nombre d'eleves (1 a 30): ");
        scanf("%d", &n);
        if (n < 1 || n > 30) printf("Valeur invalide.\n");
    } while (n < 1 || n > 30);
    return n;
}

// Étape 4 : Saisir les notes [cite: 167-171]
void saisirNotes(float notes[][3], int nbEleves) {
    for (int i = 0; i < nbEleves; i++) {
        printf("Eleve %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            if {
                printf("  Note du controle %d (0 a 20): ", j + 1);
                scanf("%f", &notes[i][j]);
            } while (notes[i][j] < 0 || notes[i][j] > 20);
        }
    }
}

// Étape 5 : Afficher les notes [cite: 195-198]
void afficherNotes(float notes[][3], int nbEleves) {
    printf("\nTableau des notes\nEleve\tC1\tC2\tC3\n");
    for (int i = 0; i < nbEleves; i++) {
        printf("%d\t%.2f\t%.2f\t%.2f\n", i + 1, notes[i][0], notes[i][1], notes[i][2]);
    }
}

// Étape 6 : Moyenne d'un élève [cite: 205-209]
float calculerMoyenneEleve(float notes[][3], int indiceEleve) {
    float somme = 0;
    for (int j = 0; j < 3; j++) somme += notes[indiceEleve][j];
    return somme / 3.0;
}

// Étape 7 : Moyenne générale [cite: 213-217]
float calculerMoyenneGenerale(float notes[][3], int nbEleves) {
    float sommeMoyennes = 0;
    for (int i = 0; i < nbEleves; i++) {
        sommeMoyennes += calculerMoyenneEleve(notes, i);
    }
    return sommeMoyennes / nbEleves;
}

// Étape 8 : Trouver meilleure note d'un contrôle [cite: 220-223]
float trouverMeilleureNoteControle(float notes[][3], int nbEleves, int indiceControle) {
    float max = notes[0][indiceControle];
    for (int i = 1; i < nbEleves; i++) {
        if (notes[i][indiceControle] > max) max = notes[i][indiceControle];
    }
    return max;
}

// Étape 9 : Afficher les meilleures notes [cite: 224-226]
void afficherMeilleuresNotes(float notes[][3], int nbEleves) {
    for (int j = 0; j < 3; j++) {
        printf("Meilleure note au controle %d: %.2f\n", j + 1, trouverMeilleureNoteControle(notes, nbEleves, j));
    }
}

int main() {
    float notes[30][3];
    int nbEleves = 0, choix;

   if {
        afficherMenu();
        choix = lireChoix();
        switch (choix) {
            case 1: nbEleves = saisirNombreEleves(); break;
            case 2: if (nbEleves > 0) saisirNotes(notes, nbEleves); break;
            case 3: if (nbEleves > 0) afficherNotes(notes, nbEleves); break;
            case 4: 
                if (nbEleves > 0) {
                    int id;
                    printf("Entrez l'indice de l'eleve (1 a %d): ", nbEleves);
                    scanf("%d", &id);
                    printf("Moyenne de l'eleve %d: %.2f\n", id, calculerMoyenneEleve(notes, id-1));
                }
                break;
            case 5: if (nbEleves > 0) printf("Moyenne generale: %.2f\n", calculerMoyenneGenerale(notes, nbEleves)); break;
            case 6: if (nbEleves > 0) afficherMeilleuresNotes(notes, nbEleves); break;
        }
    } while (choix != 0);
    return 0;
}