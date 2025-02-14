#include <stdio.h>

int main(void) {
    // Solicitar um caracter para o usuário
    char c = ("Você concorda? ");

    // Verifica se concordou
    if (c == 'S' || c == 's') {
        printf("Concordo.\n");
    } else if (c == 'N' || c == 'n') {
        printf("Não concordo.\n");
    }
}