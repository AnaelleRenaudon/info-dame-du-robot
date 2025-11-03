#include <stdio.h>

int main() {
    int abc1 = 5;
    printf("%d\n", abc1);
    return 0;
}
/*compil10.c: In function 'main':
compil10.c:4:9: error: invalid suffix "abc" on integer constant
 int 1abc = 5;
compil10.c:4:9: error: expected identifier or '(' before numeric constant
compil10.c:5:20: error: invalid suffix "abc" on integer constant
 printf("%d\n", 1abc); le probleme est le nom , il ne peut pas y avoir de chiffre en premier dans le nom de la variable 1abc ;
 j'ai mis le 1 après abc  */