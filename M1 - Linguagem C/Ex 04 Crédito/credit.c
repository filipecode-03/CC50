#include <stdio.h>

int main(void)
{
    // O número que for digitado será o número do cartão.
    long num;
    int total = 0;

    printf("NUMBER: ");
    scanf("%ld", &num); // Substitui get_long para leitura de número longo

    // Enquanto o número for maior que 0, o processo continuará acontecendo
    long atual = num;
    int soma1 = 0;

    // Parte 1
    while (atual > 0)
    {
        int ultimo = atual % 10; // Último dígito ímpar para somar é selecionado
        soma1 = soma1 + ultimo;
        atual = atual / 100; // Número passa a ser o número anterior sem o último dígito
    }

    // Parte 2
    atual = num / 10;
    int soma2 = 0;

    while (atual > 0)
    {
        int ultimo = atual % 10; // Último dígito par pra somar é selecionado
        int mult = ultimo * 2; // Os números pares serão duplicados
        soma2 = soma2 + (mult % 10) + (mult / 10);
        atual = atual / 100;
    }

    total = soma1 + soma2; // Se o total for divisível por 10, o número do cartão será válido

    if (total % 10 == 0)
    {
        // AMEX
        if (num >= 340000000000000 && num < 350000000000000)
        {
            printf("AMEX\n");
        }
        else if (num >= 370000000000000 && num < 380000000000000)
        {
            printf("AMEX\n");
        }
        // MasterCard
        else if (num >= 5100000000000000 && num < 5600000000000000)
        {
            printf("MasterCard\n");
        }
        // VISA
        else if (num >= 4000000000000 && num < 5000000000000)
        {
            printf("VISA\n");
        }
        else if (num >= 4000000000000000 && num < 5000000000000000)
        {
            printf("VISA\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}