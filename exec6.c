#include <stdio.h>

int main() {
    char nom[50];
    printf("Nom ? ");
    scanf("%s", nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}
/*la taille du tableau est trop petite ( seulement 3 caracteres car il y a le caractere nul à la fin) donc j'ai juste augmenter la taille du tableau */