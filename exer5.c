#include<stdio.h>

/* programa para ler o mes e o ano de nascimento
de uma pessoa e mostrar sua idade*/

int main() {
    int anonasc, mesnacs, anoatual, mesatual;
    anoatual = 2025;
    mesatual = 9; // Mês atual é Setembro

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anonasc);

    printf("Digite o mes do seu nascimento (1 a 12): ");
    scanf("%d", &mesnacs);

    // Primeiro, calcula a idade apenas com base no ano
    int idade = anoatual - anonasc;

    // CORREÇÃO 2: Lógica ajustada para o aniversário
    // Se o mês atual for MENOR que o mês de nascimento,
    // a pessoa ainda não fez aniversário este ano.
    // Portanto, subtraímos 1 da idade.
    if (mesatual < mesnacs) {
        idade = idade - 1; // Ou simplesmente: idade--;
    }

    // CORREÇÃO 3: O bloco 'else' não é necessário aqui.
    // Se a pessoa já fez aniversário (mesatual >= mesnacs),
    // a idade calculada inicialmente já está correta e não fazemos nada.

    // CORREÇÃO 4: Imprimir o resultado final apenas UMA vez
    printf("\nSua idade atual e: %d anos\n", idade);

    return 0;
}
