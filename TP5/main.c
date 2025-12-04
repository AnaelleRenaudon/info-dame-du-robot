#include <stdio.h>
#include "TP5.h"

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    
    int conso[7]; 
    int choix;
    int score;

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
                
                score = afficherObjectifsEtScore(conso);
                analyserScoreComplet(score, conso);
                break;
            default:
                 printf("Choix invalide. Veuillez reessayer.\n");
                 break;
        }

        afficherMenu();
        choix = lireChoixUtilisateur();
    }
    
    sauvegarderDonnees(conso);
    
    printf("Arret du programme. Au revoir !\n");

    return 0;
}