#ifndef PATIENT_H
#define PATIENT_H

struct Patient
{
    char nom[100];
    char prenom[100];
    int numDossier;
};

int ajoutPatient(struct Patient listePatient[10], struct Patient aAjouter, int taille);
void afficherListe(struct Patient listePatient[10], int taille);


#endif