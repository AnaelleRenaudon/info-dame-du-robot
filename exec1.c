#include <stdio.h>

int main() {
    int a = 2;
    int b = 0;
    int c;

    if (b != 0) {
        c = a / b;
        printf("%d\n", c);
    } else {
        printf("Erreur : division par zéro interdite.\n");
    }

    return 0;
}
