#include <stdio.h>

int main() {
    int x = 10;          
    int y = x + 5;
    printf("%d\n", y); 
    return 0;
}
/*la variable x est déclarée mais pas initialisée avant qu'on l'utilise dans y = x + 5 */