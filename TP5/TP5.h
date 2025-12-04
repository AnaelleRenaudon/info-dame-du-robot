#ifndef TP5_H
#define TP5_H

#include <stdio.h>
#include <Windows.h>
#include <locale.h>

void afficherMenu();
int lireChoixUtilisateur();

void initialiser(int conso[]);
void chargerDonnees(int conso[]);
void sauvegarderDonnees(int conso[]);

void afficherCategories();
void ajouterConsommation(int conso[]);
void afficherResume(int conso[]);

int afficherObjectifsEtScore(int conso[]);
void analyserScore(int scoreTotal, int conso[]);
void analyserScoreComplet(int scoreTotal, int conso[]);

#endif