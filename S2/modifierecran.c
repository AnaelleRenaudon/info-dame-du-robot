#include <stdio.h>

void modifierEcran(int *luminosite, int *contraste) {
    int nouvelleValeur;

    
    printf("Valeur actuelle de la luminosité : %d\n", *luminosite);
    printf("Entrez la nouvelle valeur de luminosité : ");
    scanf("%d", &nouvelleValeur);
    *luminosite = nouvelleValeur;  
    printf("Valeur actuelle du contraste : %d\n", *contraste);
    printf("Entrez la nouvelle valeur de contraste : ");
    scanf("%d", &nouvelleValeur);
    *contraste = nouvelleValeur;  
}
