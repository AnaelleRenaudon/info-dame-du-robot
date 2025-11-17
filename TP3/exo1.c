#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Entrez une taille pour l'etoile entre 5 et 10 : ");
    scanf("%d", &n);

    while (n < 5 || n > 10) {
        printf("Valeur incorrecte, entrez une taille entre 5 et 10 : ");
        scanf("%d", &n);
    }

    int width = n * n;
    int max_height = 3 * n - 1;

    char img[max_height][width];


    for (int i = 0; i < max_height; i++) {
        for (int j = 0; j < width; j++) {
            img[i][j] = ' ';
        }
    }

    
    for (int i = 0; i < max_height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", img[i][j]);
        }
        printf("\n");
    }

    
    int mid = width / 2;

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < width; j++) {
            if (j == mid - i || j == mid + i) {
                img[i][j] = 'A';
            } else if (j > mid - i && j < mid + i) {
                img[i][j] = 'S';
            }

        }
    }
 
    for (int i = 0; i < max_height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", img[i][j]);
        }
        printf("\n");
    }

    return 0;
}


