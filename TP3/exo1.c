#include <stdio.h>

int main() {
    int n;

    for {
        printf("Entrez une taille n (5 <= n <= 10) : ");
        scanf("%d", &n);
        if (n < 5 || n > 10) {
            printf("Veuillez choisir une taille entre 5 et 10.\n");
        }
    } while (n < 5 || n > 10);

    int width = n * n;
    int max_height = 3 * n - 1;

    char img[max_height][width];

    for (int i = 0; i < max_height; i++) {
        for (int j = 0; j < width; j++) {
            img[i][j] = ' ';
        }
    }

    int center_start = (width - n) / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            img[i][center_start + j] = '*';
        }
    }

    for (int i = n; i < 2 * n; i++) {
        for (int j = 0; j < n; j++) {
            img[i][center_start + j] = '*';
        }
    }}