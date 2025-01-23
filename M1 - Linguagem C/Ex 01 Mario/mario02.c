int main(void) {
    int height;
    printf("Height: ");
    scanf("%d", &height);
    
    if (height <= 8) {
        for (int i = 1; i <= height; i++) {
            // Adiciona espaços antes dos #
            for (int k = height - i; k > 0; k--) {
                printf(" ");
            }
            // Imprime os #
            for (int j = 1; j <= i; j++) {
                printf("#");
            }
            printf("\n");
        }
    }
}