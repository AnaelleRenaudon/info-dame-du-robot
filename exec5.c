#include <stdio.h>

int main() {
    char s[5];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    s[4] = '\0'; 
    printf("%s\n", s);
    return 0;
}
/* il n'y avait pas de caractère nul à la fin : \o donc le programme peut planter ou ne pas afficher les bons caracteres */
