#ifndef STRUCTURE
#define STRUCTURE

struct Panneau
{
    int largeur;
    int longueur;
    int epaisseur;
    char code[6];


     
};

void affichage_panneau ( struct Panneau p);
struct Panneau creer.panneau();
     int calculer_volume ( struct Panneau panneau);
    