#include "patients.h"
#include <stdio.h>

typedef struct Patient Patient;

int ajoutPatient(Patient listePatient[10], Patient aAjouter, int taille)
{
    listePatient[taille] = aAjouter;
    return taille + 1;
}

void afficherListe(struct Patient listePatient[10], int taille)
{
    for (int i = 0; i < taille; i++)
        printf("%d - prenom : %s , nom : %s , numDossier : %d\n", i + 1, listePatient[i].prenom, listePatient[i].nom, listePatient[i].numDossier);
}
