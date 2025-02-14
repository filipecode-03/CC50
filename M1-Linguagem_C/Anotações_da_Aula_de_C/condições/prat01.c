#include <stdio.h>

int main(void) {
    // Usuário entra com o valor de x
    int x = ("x: ");
    
    // Usuário entra com o valor de y
    int y = ("y: ");

    // Compara x e y
    if (x < y) {
        printf("x é menor que y\n");
    } else if (x > y) {
        printf("x é maior que y\n");
    } else {
        printf("x é igual a y\n");
    }
}