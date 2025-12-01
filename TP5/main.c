#include <stdio.h>
#include "TP5.h"

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    
    const char* CATEGORIES_LOCAL[7] = {
        "Eau", "Cafe", "Bonbons", "Gateau", "Legumes", "Fruits", "Proteines"
    };

    const char* EMOJIS_LOCAL[7] = {
        "💧", "☕", "🍬", "🍰", "🥦", "🍎", "🍗"
    };
    
    int conso[7]; 
    int choix;

    chargerDonnees(conso); 

    afficherMenu();
    choix = lireChoixUtilisateur();
    
    while (choix != 4) {
        switch (choix) {
            case 1:
                
                ajouterConsommation(conso, CATEGORIES_LOCAL);
                break;
            case 2:
                
                afficherResume(conso, CATEGORIES_LOCAL, EMOJIS_LOCAL);
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
    
    printf("Arret du programme. Au revoir !\n");

    return 0;
}