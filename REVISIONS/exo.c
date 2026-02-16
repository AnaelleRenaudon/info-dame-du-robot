#include <stdio.h>

/*Écrire un programme qui demande à l'utilisateur de saisir un entier n. 
Puis qui additionne les nombres de 1 à n et affiche le résultat.*/

int main(){
    int n;
    printf("Entrez un nombre : ");
    scanf("%d",&n);
    int k = 0;
    for(int i = 1 ;i<=n ; i++ ){
        k += i ; 
    }

    printf ("Le résultat est: %d",k);

    return 0;

}