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

void afficherCategories(const char* categories[]);
void ajouterConsommation(int conso[], const char* categories[]);
void afficherResume(int conso[], const char* categories[], const char* emojis[]);

int afficherObjectifsEtScore(int conso[], const char* categories[], const char* emojis[], const int objectifs[], const int poids[]);

void analyserScore(int scoreTotal, int conso[], const int objectifs[], const char* humeurBonbons[], const char* humeurLegumes[], const char* humeurFruits[]);

#endif