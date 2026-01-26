#include <stdio.h>
#include <string.h>
#include "exo5str.h"




int ajouterContact(struct Contact liste[50], int taille)
{
    struct Contact c;

    printf("Nom : ");
    scanf("%s", c.nom);

    printf("Prenom : ");
    scanf("%s", c.prenom);

    printf("Rue : ");
    scanf("%s", c.adresse.rue);

    printf("Ville : ");
    scanf("%s", c.adresse.ville);

    printf("Code postal : ");
    scanf("%d", &c.adresse.codePostal);

    printf("Telephone : ");
    scanf("%s", c.telephone);

    liste[taille] = ;
    return taille + 1;
}

void afficherContacts(struct Contact liste[50], int taille)
{
    for(int i = 0; i < taille; i++)
    {
        printf("\nContact %d\n", i+1);
        printf("Nom : %s\n", liste[i].nom);
        printf("Prenom : %s\n", liste[i].prenom);
        printf("Adresse : %s, %s %d\n", liste[i].adresse.rue,
                                         liste[i].adresse.ville,
                                         liste[i].adresse.codePostal);
        printf("Telephone : %s\n", liste[i].telephone);
    }
}

int rechercherContact(struct Contact liste[50], int taille, char nomRecherche[100])
{
    for(int i = 0; i < taille; i++)
    {
        if(strcmp(liste[i].nom, nomRecherche) == 0)
            return i;
    }
    return -1;
}

void modifierContact(struct Contact liste[50], int taille, int index)
{
    if(index < 0 || index >= taille)
    {
        printf("Index invalide\n");
        return;
    }

    int choix;
    printf("Que voulez-vous modifier ?\n");
    printf("1 - Adresse\n");
    printf("2 - Telephone\n");
    scanf("%d", &choix);

    if(choix == 1)
    {
        printf("Nouvelle rue : ");
        scanf("%s", liste[index].adresse.rue);

        printf("Nouvelle ville : ");
        scanf("%s", liste[index].adresse.ville);

        printf("Nouveau code postal : ");
        scanf("%d", &liste[index].adresse.codePostal);
    }
    else if(choix == 2)
    {
        printf("Nouveau telephone : ");
        scanf("%s", liste[index].telephone);
    }
    else
    {
        printf("Choix invalide\n");
    }

}
int main(){



}

