#include <stdio.h>

/*Écrire un programme qui utilise une boucle while pour compter de 1 à un nombre spécifié par 
l'utilisateur. 
• Demander à l'utilisateur d'entrer un nombre entier positif. 
• Utiliser une boucle while pour afficher chaque nombre de 1 jusqu'au nombre entré.*/
int main() {
int i=1;
int n;

printf("Entrez un nombre entier positif n :");
scanf("%d",&n);

if(n <= 0){
    printf("Veuillez entrer un nombre positif.\n");
    return 0;
}

while(i<=n )
{
    printf("Comptage des nombres de %d\n", i);
    i++;
}

return 0;

}