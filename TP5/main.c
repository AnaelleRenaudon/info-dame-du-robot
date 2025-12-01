#include <stdio.h>
#include "TP5.h"

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    
    int conso[7]; 
    int choix;

    chargerDonnees(conso); 

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
                
                afficherObjectifsEtScore(conso);
                break;
        }

        if (choix < 1 || choix > 4) {
             printf("Choix invalide. Veuillez reessayer.\n");
        }

        afficherMenu();
        choix = lireChoixUtilisateur();
    }
    
    sauvegarderDonnees(conso);
    
    printf("Arret du programme. Au revoir !\n");

    return 0;
}