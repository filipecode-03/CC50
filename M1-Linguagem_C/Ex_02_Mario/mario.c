#include <stdio.h>

int main(void) {
    int height;
    printf("Height: ");
    scanf("%d", &height);
    
    if (height <= 8) {
        for (int i = 1; i <= height; i++) {
            // Pirâmide alinhada à direita
            for (int k = height - i; k > 0; k--) {
                printf(" ");
            }
            for (int j = 1; j <= i; j++) {
                printf("#");
            }
            
            // Espaço entre as pirâmides
            printf("  ");
            
            // Pirâmide alinhada à esquerda
            for (int j = 1; j <= i; j++) {
                printf("#");
            }
            
            printf("\n");
        }
    }
}