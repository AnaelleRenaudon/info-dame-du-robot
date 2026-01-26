#include <stdio.h>

int sommeMinMax(int tableau[], int taille, int *min, int *max) {
    if (taille <= 0) return 0;

    *min = tableau[0]; 
    *max = tableau[0]; 
    int somme = 0;

    for (int i = 0; i < taille; i++) {
        somme += tableau[i]; 

        if (tableau[i] < *min) {
            *min = tableau[i]; 
        }
        if (tableau[i] > *max) {
            *max = tableau[i]; 
        }
    }

    return somme; 

int main() {
    int tab[] = {4, 7, 2, 9, 5};
    int taille = sizeof(tab)/sizeof(tab[0]);
    int minimum, maximum;

    int total = sommeMinMax(tab, taille, &minimum, &maximum);

    printf("Somme = %d\n", total);
    printf("Minimum = %d\n", minimum);
    printf("Maximum = %d\n", maximum);

    return 0;
}
