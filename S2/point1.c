#include <stdio.h>

int main() {
    int nombre;          
    int *ptr;            

    nombre = 10;         
    ptr = &nombre;      
    printf("Adresse de l'entier nombre : %p\n", (void*)&nombre);
    printf("Adresse du pointeur ptr : %p\n", (void*)&ptr);
    printf("Valeur de l'entier nombre : %d\n", nombre);
    printf("Valeur du pointeur ptr (adresse pointee) : %p\n", (void*)ptr);
    printf("Valeur pointee par le pointeur ptr : %d\n", *ptr);

    *ptr = 20;

    printf("\nApres modification via le pointeur :\n");
    printf("Valeur de l'entier nombre : %d\n", nombre);
    printf("Valeur pointee par le pointeur ptr : %d\n", *ptr);

    return 0;
}
