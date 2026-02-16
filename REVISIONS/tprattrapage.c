#include <stdio.h>

void inscriptionJoueurs () {
    int nbjoueurs = 4;
    char nom[];
    int age[];

}

char affichageMatch (){
    char nom[];
    int nbjoueurs = 4;
    int indice; 

}

char saisieScore (int nbmatch , int indice, char nom[],float score_joueur1,float score_joueur2,) {
  
  printf("Entrez le score du joueur 1 ( Jean ou Paul ) :");
  scanf("%d",&score_joueur1);
  printf("Entrez le score du joueur 2 ( Alban ou Jules ) :");
  scanf("%d",&score_joueur2);
  
  if(score_joueur1=score_joueur2){

    printf("Egalité.\n");
    return 0;}

  else if (score_joueur1 > score_joueur2){

    /*Je n'arrivais pas à faire renvoyer les noms des joueurs donc jai mis leur indice directement */

    printf("Félicitations , le joueur 1 gagne contre le joueur 2 %d - %d\n" , score_joueur1 , score_joueur2 );
    return indice;
}

  else if (score_joueur1 < score_joueur2) {
    printf("Félicitations , le joueur 2 gagne contre le joueur 1 %d - %d\n" , score_joueur2 , score_joueur1);
    return indice;
    }
}

void joueur_tournoi (int nbjoueurs,char nom[],int age[], ) {

   while ( int nbjoueurs > 1 )

   return ; 

}
int main () {

    int varNbJoueurs = 8;
    char nom[];
    int age[];

    void inscriptionJoueurs;
    void joueur_tournoi;

    return 0;
}
