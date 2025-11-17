#include <stdio.h>


    calculer_discriminant() {
    float a, b, c; 
    discriminant;

    printf("Entrez le coefficient a : ");
    if (scanf("%lf", &a) != 1) return;
    
    printf("Entrez le coefficient b : ");
    if (scanf("%lf", &b) != 1) return;
    
    printf("Entrez le coefficient c : ");
    if (scanf("%lf", &c) != 1) return;

    discriminant = b * b - 4 * a * c;

    printf("\n--- Resultat ---\n");
    printf("Le discriminant d est : %.10f\n", discriminant);

    if (discriminant > 0) {
        printf("Le discriminant est strictement positif, il y a deux solutions reelles \n");
    } else if (discriminant == 0) {
        printf("Le discriminant est nul, il y a une seule solution reelle \n");
    } else { 
        printf("Le discriminant est strictement negatif, il n'y a pas de solution reelle \n");
    }

    return 0;
}