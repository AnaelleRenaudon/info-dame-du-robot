#include <stdio.h>

double calculerImpot(double revenu) {
    double impot = 0.0;
    
    if (revenu <= 11294) {
        return 0.0;
    }
    
    if (revenu <= 28797) {
        impot = (revenu - 11294) * 0.11;
        return impot;
    }
    impot += (28797 - 11294) * 0.11;
    
    if (revenu <= 82341) {
        impot += (revenu - 28797) * 0.30;
        return impot;
    }
    impot += (82341 - 28797) * 0.30;
    
    if (revenu <= 177106) {
        impot += (revenu - 82341) * 0.41;
        return impot;
    }
    impot += (177106 - 82341) * 0.41;
    
    impot += (revenu - 177106) * 0.45;
    
    return impot;
}

void analyserImpots(double revenu1, double revenu2) {
    double impot1 = calculerImpot(revenu1);
    double impot2 = calculerImpot(revenu2);
    double impotSepare = impot1 + impot2;
    
    double revenuTotal = revenu1 + revenu2;
    double revenuParPart = revenuTotal / 2.0;
    double impotParPart = calculerImpot(revenuParPart);
    double impotCommun = impotParPart * 2.0;
    printf("\n========================================\n");
    printf("  RESULTATS DE L'ANALYSE FISCALE\n");
    printf("========================================\n\n");
    
    printf("DECLARATION SEPAREE :\n");
    printf("  Personne 1 (%.2f euros) : %.2f euros\n", revenu1, impot1);
    printf("  Personne 2 (%.2f euros) : %.2f euros\n", revenu2, impot2);
    printf("  TOTAL IMPOTS SEPARES : %.2f euros\n\n", impotSepare);
    
    printf("DECLARATION COMMUNE :\n");
    printf("  Revenu total : %.2f euros\n", revenuTotal);
    printf("  Revenu par part (divise par 2) : %.2f euros\n", revenuParPart);
    printf("  Impot par part : %.2f euros\n", impotParPart);
    printf("  TOTAL IMPOTS COMMUN (multiplie par 2) : %.2f euros\n\n", impotCommun);
    
    printf("========================================\n");
    
    double economie = impotSepare - impotCommun;
    
    if (economie > 0) {
        printf("RECOMMANDATION : Declaration COMMUNE\n");
        printf("   Economie realisee : %.2f euros\n", economie);
        printf("   Il est plus avantageux de se marier !\n");
    } else if (economie < 0) {
        printf("RECOMMANDATION : Declaration SEPAREE\n");
        printf("   Economie realisee : %.2f euros\n", -economie);
        printf("   Il est plus avantageux de rester celibataire.\n");
    } else {
        printf("RECOMMANDATION : EQUIVALENT\n");
        printf("   Aucune difference financiere entre les deux options.\n");
    }
    
    printf("========================================\n");
}

int main() {
    double revenu1, revenu2;
    
    printf("================================================\n");
    printf("  CALCULATEUR D'IMPOTS - COUPLE\n");
    printf("  Declaration separee vs commune\n");
    printf("================================================\n\n");
    
    printf("Entrez le revenu annuel de la personne 1 (en euros) : ");
    scanf("%lf", &revenu1);
    
    printf("Entrez le revenu annuel de la personne 2 (en euros) : ");
    scanf("%lf", &revenu2);
    
    if (revenu1 < 0 || revenu2 < 0) {
        printf("\nErreur : Les revenus ne peuvent pas etre negatifs.\n");
        return 1;
    }
    
    analyserImpots(revenu1, revenu2);
    
    return 0;
}