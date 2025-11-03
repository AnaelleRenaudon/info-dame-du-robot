#include <stdio.h>

int main() {
    int n;
    long long factorielle = 1;
    int i = 1;

    printf("Entrez un nombre entier n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
        return 0;
    }

    while (i <= n) {
        factorielle *= i;
        i++;
    }

    printf("La factorielle de %d est %lld.\n", n, factorielle);

    return 0;
}
