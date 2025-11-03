#include <stdio.h>

int main() {
    int N;    
    int i = 0; 

    
    printf("Entrez un nombre entier N : ");
    scanf("%d", &N);


    printf("Les nombres pairs de 0 jusqu'à %d sont :\n", N);

    
    while (i <= N) {
        printf("%d\n", i);
        i += 2;  

    return 0;
}
}
