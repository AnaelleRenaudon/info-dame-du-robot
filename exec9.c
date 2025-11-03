#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    printf("a=%d b=%d\n", a, b); 
    return 0;
}

/* On a deux %d donc il y en a un qui ne correspond à rien : il faut que chaque %d corresponde à un argument de la chaine */