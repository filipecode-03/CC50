float media(int quantidade, int array[]) {
    int soma = 0;
    for (int i = 0; i < quantidade; i++) {
        soma += array[i];
    }
    return soma / (float) quantidade;
}