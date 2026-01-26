#ifndef CONTACTS_H
#define CONTACTS_H

struct Adresse
{
    char rue[100];
    char ville[100];
    int codePostal;
};

struct Contact
{
    char nom[100];
    char prenom[100];
    struct Adresse adresse;
    char telephone[20];
};

int ajouterContact(struct Contact liste[50], int taille);
void afficherContacts(struct Contact liste[50], int taille);
int rechercherContact(struct Contact liste[50], int taille, char nomRecherche[100]);
void modifierContact(struct Contact liste[50], int taille, int index);

#endif