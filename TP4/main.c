#include <stdio.h>
#include "exfichier.h"

int main()
{
    int i = 8;
    fonction(i);
    printf("%d\n", i); // print 8

    fonction2(4);

    char mot[] = " blabla bloblo";
    int taille = fonction3(mot);
    printf("la chaine %s a une longueur de %d\n", mot, taille);

    char mot2[] = "kdjfksdgvdfbdjf jhdf";
    printf("la chaine %s a une longueur de %d\n", mot2, fonction3(mot2));

    // Morpion

    char plateau[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};

    jeu(plateau, 'O', 'X');

    return 0;
}