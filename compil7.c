#include <stdio.h>

// ici le comilateur ne dit malheureusement rien mais il devrait,
// executer pour essayer de comprendre ce qu'il se passe 
int main() {
    int tableau[5];
    int i = 12;
    for (int j = 0; j < 5; j++)
    {
        tableau[j] = 1;
    }
    printf("OK %d\n", tableau[5]);
    return 0;
}/*le tableau est déclaré pour les valeurs de 1 à 4 , hors quand on écrit tableau[5] , on est hors bornes 
Correction : ligne 12 tableau[6] */
