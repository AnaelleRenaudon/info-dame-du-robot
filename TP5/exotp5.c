#include <stdio.h>
#include "TP5.h"

static const char* CATEGORIES[7] = {
    "Eau", "Cafe", "Bonbons", "Gateau", "Legumes", "Fruits", "Proteines"
};
static const char* EMOJIS_CATEGORIES[7] = {
    "💧", "☕", "🍬", "🍰", "🥦", "🍎", "🍗"
};
static const int OBJECTIFS[7] = {
    2,  
    1,  
    0,  
    0,  
    3,  
    2,  
    1   
};
static const int POIDS_SCORE[7] = {
    5,   
    5,   
    -10, 
    -10, 
    15,  
    10,  
    10   
};

static const char* HUMEUR_BONBONS[3] = {
    "😇", 
    "🙂", 
    "😐"
    "😈"
};

static const char* HUMEUR_LEGUMES[4] = {
    "😭",
    "🙂", 
    "😎"  
};

static const char* HUMEUR_FRUITS[3] = {
    "😢", 
    "🙂", 
    "😀"  
};

void afficherMenu() {
    printf("\n============ Suivi de consommation ============\n");
    printf("1. Ajouter une consommation\n");            
    printf("2. Afficher le resume du jour\n");           
    printf("3. Afficher les objectifs et le score\n");   
    printf("4. Sauvegarder et quitter\n");               
    printf("Votre choix : ");                           
}

int lireChoixUtilisateur() {
    int choix = 0; 
    
    if (scanf("%d", &choix) != 1) {
        while (getchar() != '\n');
        return 0; 
    }
    
    while (getchar() != '\n');
    
    return choix;
}

void initialiser(int conso[]) {
    for (int i = 0; i < 7; i++) {
        conso[i] = 0;
    }
}

void afficherCategories() {
    printf("\nQuelle categorie voulez-vous modifier ?\n");
    for (int i = 0; i < 7; i++) {
        printf("%d. %s\n", i + 1, CATEGORIES[i]);
    }
    printf("Votre choix: ");
}

void ajouterConsommation(int conso[]) {
    int choix_cat;
    int quantite;

    afficherCategories();
    
    if (scanf("%d", &choix_cat) != 1) {
        while (getchar() != '\n');
        printf("Saisie invalide.\n");
        return;
    }
    
    while (getchar() != '\n'); 
    
    if (choix_cat >= 1 && choix_cat <= 7) {
        printf("Combien d'unites ajouter a %s ? ", CATEGORIES[choix_cat - 1]);
        if (scanf("%d", &quantite) != 1) {
             while (getchar() != '\n');
             printf("Saisie invalide.\n");
             return;
        }
        
        while (getchar() != '\n'); 

        conso[choix_cat - 1] += quantite; 
        printf("Consommation de %s mise a jour.\n", CATEGORIES[choix_cat - 1]);
    } else {
        printf("Choix de categorie invalide.\n");
    }
}

void afficherResume(int conso[]) {
    printf("\n======== Resume du jour ========\n");

    for (int i = 0; i < 7; i++) {
        printf("%s %s:\t%d\n", EMOJIS_CATEGORIES[i], CATEGORIES[i], conso[i]); 
    }
    
    printf("================================\n"); 
}

void chargerDonnees(int conso[]) {
    FILE *fichier = fopen("conso.txt", "r");
    int i;

    if (fichier == NULL) {
        printf("Fichier conso.txt non trouve. Initialisation des donnees a zero.\n");
        initialiser(conso);
        return;
    }

    printf("Donnees chargees depuis conso.txt.\n");
    for (int i = 0; i < 7; i++) {
        if (fscanf(fichier, "%d", &conso[i]) != 1) {
            for (int j = i; j < 7; j++) {
                conso[j] = 0;
            }
            break;
        }
    }

    fclose(fichier);
}

void sauvegarderDonnees(int conso[]) {
    FILE *fichier = fopen("conso.txt", "w"); 
    int i;
    int succes = 1;

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier de sauvegarde !\n");
        return;
    }

    for (i = 0; i < 7; i++) {
        if (fprintf(fichier, "%d ", conso[i]) < 2) { 
            succes = 0;
            break; 
        }
    }
    
    if (fclose(fichier) == EOF) {
        succes = 0;
    }

    if (succes) {
        printf("Donnees sauvegardees avec succes dans conso.txt.\n");
    } else {
        printf("Avertissement: Erreur lors de la sauvegarde des donnees.\n");
    }
}

int afficherObjectifsEtScore(int conso[]) {
    int scoreTotal = 0;
    
    printf("\n======== Objectifs et Score ========\n");

    for (int i = 0; i < 7; i++) {
        int reussi;
        int scoreCategorie = 0;
        
        if (OBJECTIFS[i] > 0) {
            reussi = (conso[i] >= OBJECTIFS[i]);
            scoreCategorie = reussi ? POIDS_SCORE[i] : 0;
        } else {
            reussi = (conso[i] == 0); 
            scoreCategorie = conso[i] > 0 ? POIDS_SCORE[i] : 0;
        }

        scoreTotal += scoreCategorie;
        
        printf("%s %-8s  Obj: %d  Cnsm: %d  Statut: %s  Score: %d\n",
            EMOJIS_CATEGORIES[i],
            CATEGORIES[i],
            OBJECTIFS[i],
            conso[i],
            reussi ? "REUSSI" : "ECHEC",
            scoreCategorie
        );
    }

    printf("======================================\n");
    printf("SCORE TOTAL DU JOUR : %d\n", scoreTotal);
    printf("======================================\n");
    
    return scoreTotal;
}

void analyserScore(int scoreTotal, int conso[]) {
    printf("\n--- ANALYSE DU JOUR ---\n");
    
    printf("\n--- DETAILS ALIMENTAIRES ---\n");
    
    int consoBonbons = conso[2];
    int indexBonbons = (consoBonbons >= 2) ? 2 : consoBonbons; 
    const char* humeurBonbonsSel = HUMEUR_BONBONS[indexBonbons];
    
    printf("%s BONBONS : Vous avez consomme %d unite(s) sur un objectif de %d.\n",
        humeurBonbonsSel, consoBonbons, OBJECTIFS[2]);

    int consoLegumes = conso[4];
    int objLegumes = OBJECTIFS[4];
    int indexLegumes = (consoLegumes >= objLegumes) ? objLegumes : consoLegumes; 
    const char* humeurLegumesSel = HUMEUR_LEGUMES[indexLegumes];
    
    printf("%s LEGUMES : Vous avez consomme %d unite(s) sur un objectif de %d.\n",
        humeurLegumesSel, consoLegumes, objLegumes);

    int consoFruits = conso[5];
    int objFruits = OBJECTIFS[5];
    int indexFruits = (consoFruits >= objFruits) ? objFruits : consoFruits; 
    const char* humeurFruitsSel = HUMEUR_FRUITS[indexFruits];

    printf("%s FRUITS : Vous avez consomme %d unite(s) sur un objectif de %d.\n",
        humeurFruitsSel, consoFruits, objFruits);

    printf("----------------------------\n");
}