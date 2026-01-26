#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void afficherCartes(int *cartes, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%2d ", cartes[i]);
        if ((i + 1) % 13 == 0)  
            printf("\n");
    }
    printf("\n");
}

void melangerCartes(int *cartes, int taille)
{
    int temp, j;

    for (int i = 0; i < taille; i++)
    {
        j = rand() % taille;   
        temp = cartes[i];
        cartes[i] = cartes[j];
        cartes[j] = temp;
    }
}

int main()
{
    int cartes[TAILLE];

    for (int i = 0; i < TAILLE; i++)
    {
        cartes[i] = i + 1;
    }

    srand(time(NULL));

    printf("Cartes avant melange :\n");
    afficherCartes(cartes, TAILLE);

    melangerCartes(cartes, TAILLE);

    printf("\nCartes apres melange :\n");
    afficherCartes(cartes, TAILLE);

    return 0;
}
