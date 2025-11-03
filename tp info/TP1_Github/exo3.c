#include <stdio.h>


int main() {
    char mot[] = "ALLIGATOR";
    char lettre;
    int longueur = strlen(mot);
    char motCache[longueur + 1];
    int essaisRestants = 8;
    int trouve = 0;

    for (int i = 0; i < longueur; i++) motCache[i] = '_';
    motCache[longueur] = '\0';

    while (essaisRestants > 0 && trouve < longueur) {
        printf("\nMot : %s\n", motCache);
        printf("Essais restants : %d\n", essaisRestants);
        printf("Entrez une lettre : ");
        scanf(" %c", &lettre);

        int bonneLettre = 0;
        for (int i = 0; i < longueur; i++) {
            if (mot[i] == lettre && motCache[i] == '_') {
                motCache[i] = lettre;
                trouve++;
                bonneLettre = 1;
            }
        }

        if (!bonneLettre) essaisRestants--;
    }

    if (trouve == longueur)
        printf("\nBravo ! Le mot était : %s\n", mot);
    else
        printf("\nPerdu ! Le mot était : %s\n", mot);

    return 0;
}
