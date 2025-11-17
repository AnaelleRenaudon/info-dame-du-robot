#include <stdio.h>

int main() {
    int tab[10];
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}
/* Le tableau était trop petit ligne 4 je l'ai agrandi*/