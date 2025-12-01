#include <stdio.h>
#include "TP5.h"

int main() {
    int conso[7]; 
    int choix;

    initialiser(conso);

    afficherMenu();
    choix = lireChoixUtilisateur();
    
    while (choix != 4) {
        switch (choix) {
            case 1:
                ajouterConsommation(conso);
                break;
            case 2:
                afficherResume(conso);
                break;
            case 3:
                break;
        }

        if (choix < 1 || choix > 4) {
             printf("Choix invalide. Veuillez reessayer.\n");
        }

        afficherMenu();
        choix = lireChoixUtilisateur();
    }
    
    printf("Au revoir !\n");

    return 0;
}