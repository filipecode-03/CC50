#include <stdio.h>

const int TOTAL = 3;

int main(void) {
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++){
        scores[i] = ("pontuação:");
    }
    // Imprimir média
    printf("Média: %f \n", (scores[0] + scores[1] + scores[2]) / 3.0);
}