#include "jeux.h"
#include <Windows.h>

int main()
{
    // cacher curseur
    CONSOLE_CURSOR_INFO cci;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleCursorInfo(hConsole, &cci);
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hConsole, &cci);
    //
    char tableau[32][52]; // 31 en hauteur et 52 en largeur, 2 pour les bords (gauche + droite) et un bord en haut
    char touche = 'N';
    int balle[3] = {26, 25, 0}; // x, y, numero de diagonale (0 -> haut gauche, 1 -> haut droite, ect)
    int plateforme[3] = {20, 29, 10}; // x, y, taille
    while (1)
    {
        system("cls"); // clear le cmd
        remplir_tableau(tableau);
        ajouter_briques(tableau);
        ajouter_balles(tableau, balle);
        ajouter_plateforme(tableau, plateforme);
        afficher_tab(tableau);
        modifier_pos_balle(tableau, balle);
        touche = lireCommandeNonBloquante();
         deplacer_plateforme(tableau, plateforme, touche);
        Sleep(600); // attendre
    }

    return 0;
}