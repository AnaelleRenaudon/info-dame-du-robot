#ifndef BIBLIO_H
#define BIBLIO_H

struct Livre
{
    char titre[100];
    char auteur[100];
    int anneeProd;
};

void afficherInfoLivre(struct Livre l);

#endif