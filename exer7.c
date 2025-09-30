#include<stdio.h>

// Programa para ler dois números, somá-los e no final dar um desconto
// de 10 por cento e mostrar o valor com o desconto.

int main() {
    float prod1, prod2;
    // O desconto é fixo, então podemos defini-lo como uma constante.
    int desconto = 10;

    printf("Digite o valor do primeiro produto..: R$ ");
    scanf("%f", &prod1);

    printf("Digite o valor do segundo produto..: R$ ");
    // CORREÇÃO 1: Ler o valor para a variável correta (prod2).
    scanf("%f", &prod2);

    // CORREÇÃO 2: Calcular a soma PRIMEIRO.
    // Isso torna o código mais claro.
    float somaTotal = prod1 + prod2;

    // CORREÇÃO 3: Aplicar o desconto sobre a SOMA TOTAL.
    // A fórmula é a mesma de antes, mas aplicada à variável 'somaTotal'.
    // E a divisão da porcentagem deve ser por 100.0.
    float valorFinal = somaTotal * (1.0 - (desconto / 100.0));

    // Exibe a soma antes do desconto (opcional, mas bom para clareza)
    printf("\nValor total dos produtos: R$ %.2f", somaTotal);

    // CORREÇÃO 4: Mensagem corrigida e usando %.2f para formatar como dinheiro.
    printf("\nValor final com 10%% de desconto: R$ %.2f\n", valorFinal);

    return 0;
}
