#include <stdio.h>
#include "TP5.h"

void afficherMenu() {
    printf("\n============ Suivi de consommation ============\n");
    printf("1. Ajouter une consommation\n");            
    printf("2. Afficher le resume du jour\n");           
    printf("3. Afficher les objectifs et le score\n");   
    printf("4. Sauvegarder et quitter\n");               
    printf("Votre choix : ");                           
}

int lireChoixUtilisateur() {
    int choix = 0; 
    
    if (scanf("%d", &choix) != 1) {
        while (getchar() != '\n');
        return 0; 
    }
    
    while (getchar() != '\n');
    
    return choix;
}