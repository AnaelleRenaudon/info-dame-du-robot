#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Entrez une taille pour l'etoile (entre 5 et 10) : ");
    scanf("%d", &n);

    while (n < 5 || n > 10) {
        printf("Valeur incorrecte,entrez une taille entre 5 et 10 : ");
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

    int mid = width / 2;

    for (int i = 0; i < n; i++) {
        int left = mid - i;
        int right = mid + i;

        for (int j = 0; j < width; j++) {

            if (i < n - 1) {
                if (j == left || j == right)
                    img[i][j] = 'A';
                else if (j > left && j < right)
                    img[i][j] = 'S';
            }
            else {
                img[i][j] = '_';
                if (j == left || j == right)
                    img[i][j] = 'A';
                else if (j > left && j < right)
                    img[i][j] = 'S';
            }
        }
    }

    int top = n;
    int left = 0;
    int right = width - 1;

    for (int j = 0; j < width; j++) {
        if (j == left || j == right)
            img[top][j] = '.';
        else
            img[top][j] = 'S';
    }

    for (int i = top + 1; i < top + n; i++) {
        left++;
        right--;
        for (int j = 0; j < width; j++) {
            if (j == left || j == right)
                img[i][j] = '.';
            else if (j > left && j < right)
                img[i][j] = 'S';
        }
    }

    int leg_star = 2 * n;
    for (int i = leg_star; i < max_height; i++) {
        int k = n - 1 - (i - leg_star);
        int leg_left = mid - k;
        int leg_right = mid + k;
        for (int j = 0; j < width; j++) {
            if (j >= leg_left && j <= leg_right && j != mid) {
                if (j == leg_left)
                    img[i][j] = '"';
                else if (j == leg_right)
                    img[i][j] = '.';
                else if ( j>= mid-1 && j<=mid+1)
                      img[i][j] = ' ';
        
                else
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



