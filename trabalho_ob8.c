#include <stdio.h>
#include <locale.h>

/*8.  Crie um programa que receba um número inteiro positivo n e apresente um quadro
de números como o que se segue abaixo. Este é o caso de n = 5 (pode-se limitar o
valor em 10).
 Exemplo (n=5): 1 2 3 4 5
 2 3 4 5 6
 3 4 5 6 7
 4 5 6 7 8
 5 6 7 8 9*/


 int main(){
    //Lidar com acentuaçao na hora de imprimir
    setlocale(LC_ALL, "Portuguese");

    int n; // VAriavel para armazenar o numero digitado pelo usuario
    int i, j; // Variáveis de controle para os laços 'for' (i para linhas, j para colunas)

    //entrada e validacao do numero

    printf("Digite um numero inteiro positivo(limite de ate o numero 20): ");
    scanf("%d", &n);

    //Validacao garante que o numero esteja entre 1 e 10.
    //Enquanto o numero for invalido o program pedira novamente
    while (n<= 0 || n > 10){
        printf("\nValor inválido!! Por favor, Digite um número válido de 1 a 20...");
        scanf("%d", &n);
    }

    printf("\n");

    //gerando o quadro dos numeros

    //laco de repetiçao interno: Controla Colunas as linhas do quadro
    //ele sera executado 'n' vezes, uma para cada linha

    for(j = 1; j <= n; j++){

        //laco de repeticao inteirno: contola as colunas de cada linha
        //Para cada linha este laco tambem sera executado 'n' vezes
        for (j = 1; j <= n; i++){
            //A formula para encontra o numero correto e (linha + coluna - 1)
            // Imprime o resultado da fórmula.
            // O "%3d" formata o número para ocupar 3 espaços, alinhando o quadro.
            printf("%3d", i + j - 1);
        }

        //Apos o laco interno terminar (uma linha inteira foi impressa)
        // pulamos para a próxima linha para começar a próxima iteração do laço externo.
        printf("\n");
    }

    return 0;

 }
