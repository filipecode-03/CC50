#include <stdio.h>
#include <math.h>

int main() {
    int tamanho_inicial, tamanho_final, anos;
    double taxa_crescimento = 0.1; // Taxa de crescimento anual (10%)

    // Solicitar o tamanho inicial da população
    do {
        printf("Digite o tamanho inicial da população (mínimo 9): ");
        scanf("%d", &tamanho_inicial);
    } while (tamanho_inicial < 9);

    // Solicitar o tamanho final da população
    do {
        printf("Digite o tamanho final da população: ");
        scanf("%d", &tamanho_final);
    } while (tamanho_final <= tamanho_inicial);

    // Cálculo do número de anos (utilizando a fórmula do crescimento exponencial)
    anos = ceil(log(tamanho_final / (double)tamanho_inicial) / log(1 + taxa_crescimento));

    // Imprimir o resultado
    printf("Anos: %d\n", anos);

    return 0;
}