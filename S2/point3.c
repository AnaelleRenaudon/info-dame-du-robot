#include <stdio.h>


void echanger(int *a, int *b) {
    if (a == NULL ||b == NULL){
    return;
    }
    int temp = *a;  
    *a = *b;       
    *b = temp;    
}

int main() {
    int a = 10, b = 20;

    printf("Avant echange : a = %d, b = %d\n", a, b);

    echanger(&a, &b);

    printf("Apres echange : a = %d, b = %d\n", a, b);

    return 0;
}
