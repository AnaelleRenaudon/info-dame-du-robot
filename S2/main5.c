#include <stdio.h>

void modifierEcran(int *luminosite, int *contraste);

int main() {
    int luminosite = 50; 
    int contraste = 50;  

    printf("Avant modification :\n");
    printf("Luminosité = %d\n", luminosite);
    printf("Contraste = %d\n\n", contraste);

    modifierEcran(&luminosite, &contraste);

    printf("\nAprès modification :\n");
    printf("Luminosité = %d\n", luminosite);
    printf("Contraste = %d\n", contraste);

    return 0;
}
