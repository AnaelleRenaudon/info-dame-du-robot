#include <stdio.h>

int main() {
    int x = 10;
    int y = x
    printf("x = %d\n", y);
    return 0;
}
/*compil8.c: In function 'main':
compil8.c:5:24: error: 'y' undeclared (first use in this function)
     printf("x = %d\n", y);
                        ^
compil8.c:5:24: note: each undeclared identifier is reported only once for each function it appears in
la fonction y n'etait pas déclarée donc : ligne 5 */