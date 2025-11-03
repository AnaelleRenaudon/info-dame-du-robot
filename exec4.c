#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++; 
    }
    return 0;
}

/* i n’est jamais modifiée dans la boucle while donc il faut incrémenter i sinon la condition est toujours vraie
*/