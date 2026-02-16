#include <stdio.h>

/*Créer un programme qui permet à l’utilisateur de réaliser une opération arithmétique de base 
(addition, soustraction, multiplication, division) entre deux nombres. 
• Demander à l’utilisateur de saisir deux nombres. 
• Demander à l’utilisateur de choisir l’opération à effectuer. 
• Afficher le résultat de l’opération.*/

int main(){

    int n1;
    int n2;
    char saisie_utilisateur;
    printf("Entrez un nombre n1 :");
    scanf("%d",&n1);
    printf("Entrez un nombre n2 :");
    scanf("%d",&n2);
    printf("Choisir une opération parmi + , - , * , / ");
    scanf("%c",&saisie_utilisateur);

    if(saisie_utilisateur == '+' ){
        printf("Le résultat de l'addition est : %d" , n1 + n2 );
    }
    else if(saisie_utilisateur == '/'){
        printf("Le resultat de la division est : %f", n1 / n2);
    }

    return 0;

}

// != cest pas egal