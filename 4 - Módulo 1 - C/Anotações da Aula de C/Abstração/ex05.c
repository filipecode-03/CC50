#include <stdio.h>

int get_positive_int(void);

int main(void) {
    int i = get_positive_int();
    print("%i\n");
}

// Solicitar um número inteiro positivo ao usuário
int get_positive_int(void) {
    int n;
    do {
        n = ("Número positivo: \n");
    } while (n < 1);
    return n;
}