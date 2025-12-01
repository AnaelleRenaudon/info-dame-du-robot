#include <stdio.h>
#include "TP5.h"

int main() {
    int conso[7]; 
    int choix;

    afficherMenu();
    choix = lireChoixUtilisateur();
    
    while (choix != 4) {
        switch (choix) {
            case 1:
            case 2:
            case 3:
                break;
            case 4:
                break; 
        }

        if (choix < 1 || choix > 4) {
             printf("Choix invalide. Veuillez reessayer.\n");
        }

        afficherMenu();
        choix = lireChoixUtilisateur();
    }
    
    printf(" Au revoir !\n");

    return 0;
}