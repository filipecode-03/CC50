int main(void) {
    float amount;
    int cents, coins = 0;

    // Pergunta ao usuário quanto dinheiro é devido
    do {
        printf("Amount owed: ");
        scanf("%f", &amount);
    } while (amount < 0);

    // Converte o valor para centavos
    cents = round(amount * 100);

    // Calcula o número mínimo de moedas
    coins += cents / 25;
    cents %= 25;
    coins += cents / 10;
    cents %= 10;
    coins += cents / 5;
    cents %= 5;
    coins += cents;

    // Imprime o número mínimo de moedas
    printf("Minimum number of coins: %d\n", coins);
}