#include <stdio.h>

int main() {
    char c = 'A';
    printf("c = %c\n", c);
    return 0;
}
/*l'erreur est dans le print f le "%s" doit etre changé par un "%c" car il n'y a qu'un seul caractère ey non plusieurs */