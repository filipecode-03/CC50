#include <stdio.h>

int main(void) {
    int scores[3];
    for (int i = 0; i < 3; i++) {
        scores[i] = ("pontuação:");
    }
    // Imprime a média
    printf("Media: %f \n", (scores[0] + scores[1] + scores[2]) / 3.0);
}