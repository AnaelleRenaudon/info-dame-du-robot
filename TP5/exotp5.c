#include <stdio.h>
#include <stdlib.h>
#include "TP5.h"

const char* CATEGORIES[7] = {
    "Eau", "Cafe", "Bonbons", "Gateau", "Legumes", "Fruits", "Proteines"
};

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

void initialiser(int conso[]) {
    for (int i = 0; i < 7; i++) {
        conso[i] = 0;
    }
}

void afficherCategories() {
    printf("\nQuelle categorie voulez-vous modifier ?\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. %s\n", i + 1, CATEGORIES[i]);
    }
    printf("Votre choix: ");
}

void ajouterConsommation(int conso[]) {
    int choix_cat;
    int quantite;

    afficherCategories();
    
    if (scanf("%d", &choix_cat) != 1) {
        while (getchar() != '\n');
        printf("Saisie invalide.\n");
        return;
    }
    
    while (getchar() != '\n'); 
    
    if (choix_cat >= 1 && choix_cat <= 7) {
        printf("Combien d'unites ajouter a %s ? ", CATEGORIES[choix_cat - 1]);
        if (scanf("%d", &quantite) != 1) {
             while (getchar() != '\n');
             printf("Saisie invalide.\n");
             return;
        }
        
        while (getchar() != '\n'); 

        conso[choix_cat - 1] += quantite; 
        printf("Consommation de %s mise a jour.\n", CATEGORIES[choix_cat - 1]);
    } else {
        printf("Choix de categorie invalide.\n");
    }
}