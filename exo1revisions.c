Exercice 1 for

#include <stdio.h>

    int main() {
   int n, sum = 0;
   
   //Demander à l'utilisateur de saisir un entier n
    printf("Entrez un nombre entier n : ");
    scanf("%d", &n)
    Calculer la somme des nombres de 1 à n
    for (int i = 1; i <= n; i++) {
        sum += i;  // Ajoute i à sum
    }
     Afficher le résultat
    printf("La somme des nombres de 1 à %d est %d\n", n, sum);
    return 0
}