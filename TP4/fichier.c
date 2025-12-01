#include <stdio.h>
#include "exfichier.h"

void fonction(int i)
{
    printf("Bonjour\n");
    i = 5;
}

void fonction2(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 2)
        {
            return;
        }
        fonction(0);
    }
}

int fonction3(char tab[])
{
    int i = 0;
    while (tab[i] != '\0')
    {
        i++;
    }
    return i;
}

void afficherGrille(char tab[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j != 2)
            {
                printf(" %c |", tab[i][j]);
            }
            else
            {
                printf(" %c ", tab[i][j]);
            }
        }
        if (i != 2)
        {
            printf("\n---+---+---\n");
        }
        else
        {
            printf("\n");
        }
    }
}

void actionJoueur(char tab[3][3], char joueur)
{
    printf("ou voulez vous jouer ? \n");
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);

    if (tab[i][j] == ' ')
    {
        tab[i][j] = joueur;
    }
    else
    {
        printf("case prise, rejouez\n");
        actionJoueur(tab, joueur);
    }
}

int verifierGagnant(char tab[3][3], char joueur)
{
    for (int i = 0; i < 3; i++)
    {
        if (tab[i][0] == joueur && tab[i][1] == joueur && tab[i][2] == joueur)
        {
            printf("jouer %c gagne !\n", joueur);
            return 1;
        }
        if (tab[0][i] == joueur && tab[1][i] == joueur && tab[2][i] == joueur)
        {
            printf("jouer %c gagne !\n", joueur);
            return 1;
        }
    }
    if (tab[0][0] == joueur && tab[1][1] == joueur && tab[2][2] == joueur)
    {
        printf("jouer %c gagne !\n", joueur);
        return 1;
    }
    if (tab[0][2] == joueur && tab[1][1] == joueur && tab[2][0] == joueur)
    {
        printf("jouer %c gagne !\n", joueur);
        return 1;
    }
    return 0;
}

int verifierEgalite(char tab[3][3], char joueur1, char joueur2)
{
    if (verifierGagnant(tab, joueur1) == 1 || verifierGagnant(tab, joueur2) == 1)
        return 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (tab[i][j] == ' ')
            {
                return 0;
            }
        }
    }

    printf("Egalite ! \n");
    return 1;
}

void jeu(char tab[3][3], char joueur1, char joueur2)
{
    afficherGrille(tab);
    char joueurCourant = joueur1;
    char autreJoueur = joueur2;
    while (verifierEgalite(tab, joueur1, joueur2) == 0 && verifierGagnant(tab, autreJoueur) == 0)
    {
        actionJoueur(tab, joueurCourant);
        afficherGrille(tab);

        char jTemp = joueurCourant;
        joueurCourant = autreJoueur;
        autreJoueur = jTemp;
    }
}

