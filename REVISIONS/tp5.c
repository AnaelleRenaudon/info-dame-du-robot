#include <stdio.h>

// Étape 1 : Fonction
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Étape 2 : Fonction de calcul de somme et produit
void calculer(int a, int b, int *somme, int *produit) {
    *somme = a + b;
    *produit = a * b;
}

int main() {
    int x = 5, y = 10;
    int s, p;

    printf("Avant echange : x = %d, y = %d\n", x, y);
    echanger(&x, &y); // On envoie les adresses
    printf("Apres echange : x = %d, y = %d\n", x, y);

    calculer(x, y, &s, &p); // On passe les adresses pour stocker les résultats
    printf("Somme : %d, Produit : %d\n", s, p);

    return 0;
}



#include <stdio.h>
#include <stdlib.h> 

// Étape 1 : Allocation du tableau
int* allouerTableau(int n) {
    int *tab = (int*)malloc(n * sizeof(int));
    if (tab == NULL) { // Vérification de l'allocation
        printf("Erreur d'allocation mémoire.\n");
        exit(1);
    }
    return tab;
}

// Étape 2 : Remplissage du tableau
void remplirTableau(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tab[i]); // Ou scanf("%d", tab + i);
    }
}

// Étape 3 : Affichage du tableau
void afficherTableau(int *tab, int n) {
    printf("Contenu du tableau : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Étape 4 : Calcul de la moyenne
float calculerMoyenne(int *tab, int n) {
    int somme = 0;
    for (int i = 0; i < n; i++) {
        somme += tab[i];
    }
    return (float)somme / n;
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    // Utilisation des fonctions avec pointeurs
    int *monTableau = allouerTableau(n);
    remplirTableau(monTableau, n);
    afficherTableau(monTableau, n);
    
    printf("Moyenne : %.2f\n", calculerMoyenne(monTableau, n));

    // Étape 5 : Libération de la mémoire
    free(monTableau);
    monTableau = NULL; 

    return 0;
}