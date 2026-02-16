#include <stdio.h>

int main() {
    int n;

    // Demande à l'utilisateur la taille de l'étoile.
    // La taille doit être comprise entre 5 et 10.
    printf("Choose star size (recommended 5 to 10): ");
    if (scanf("%d", &n) != 1 || n < 5 || n > 10) {
        // Vérifie que l'entrée est un entier valide et dans l'intervalle autorisé.
        // Si ce n’est pas le cas, on affiche un message d’erreur et on quitte le programme.
        printf("Taille invalide.\n");
        return 1;
    }

    // Calcul des dimensions de la figure :
    // - largeur = n × n (la figure devient plus large quand n augmente)
    // - hauteur = 3n − 1 (permet d’avoir la pointe + le corps + les jambes)
    int width = n * n;
    int height = 3 * n - 1;

    // Création d’un tableau 2D de caractères représentant l’image.
    // Chaque case contiendra un caractère à afficher.
    char img[height][width];

    // Initialisation complète du tableau avec des espaces.
    // Cela permet de partir d’un fond vide avant de dessiner la forme.
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            img[i][j] = ' ';
        }
    }

    // Calcul du centre horizontal de l’image.
    // Il servira de point de départ pour dessiner la pointe.
    int mid = width / 2;

    // Dessin de la pointe (triangle supérieur).
    // À chaque ligne, la largeur du triangle augmente.
    for (int i = 0; i < n; i++) {

        // Détermination des positions gauche et droite du triangle pour la ligne i.
        int left = mid - i;
        int right = mid + i;

        // Remplissage intérieur du triangle avec le caractère 'S'.
        for (int j = left; j <= right; j++) {
            img[i][j] = 'S';
        }

        // Remplacement des bords gauche et droit par 'A'
        // pour matérialiser les contours de la pointe.
        img[i][left] = 'A';
        img[i][right] = 'A';
    }

    // Partie prévue pour éventuellement ajouter une base sous la pointe.
    // Actuellement vide : aucune modification n’est effectuée ici.
    for (int j = 0; j < width; j++) {
        if (j < mid - n + 1 || j > mid + n - 1) {
            // Zone extérieure à la base de la pointe.
            // Aucun caractère n’est placé ici pour l’instant.
        }
    }

    // Dessin de la première ligne du corps central,
    // située juste sous la pointe.
    int row = n;

    // Remplissage complet de cette ligne avec 'S'.
    for (int j = 0; j < width; j++) {
        img[row][j] = 'S';
    }

    // Remplacement des deux extrémités par des guillemets
    // pour donner un effet visuel particulier aux bords.
    img[row][0] = '\"';
    img[row][width - 1] = '\"';

    // Dessin simplifié des jambes dans les dernières lignes.
    // On modifie uniquement certaines colonnes pour créer l’effet visuel.
    for (int i = height - n; i < height; i++) {

        // Jambe gauche : deux caractères positionnés autour de la colonne n
        img[i][n-2] = '.';
        img[i][n+2] = '\"';

        // Jambe droite : symétrique par rapport à la largeur
        img[i][width-n-2] = '\"';
        img[i][width-n+2] = '.';
    }

    // Affichage final de l’image.
    // On parcourt chaque ligne puis chaque colonne pour afficher les caractères.
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%c", img[i][j]);
        }
        printf("\n"); // Retour à la ligne après chaque ligne d’image
    }

    return 0;
}
