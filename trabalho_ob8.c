#include <stdio.h>
#include <locale.h>

/*8.  Crie um programa que receba um n�mero inteiro positivo n e apresente um quadro
de n�meros como o que se segue abaixo. Este � o caso de n = 5 (pode-se limitar o
valor em 10).
 Exemplo (n=5): 1 2 3 4 5
 2 3 4 5 6
 3 4 5 6 7
 4 5 6 7 8
 5 6 7 8 9*/


 int main(){
    //Lidar com acentua�ao na hora de imprimir
    setlocale(LC_ALL, "Portuguese");

    int n; // VAriavel para armazenar o numero digitado pelo usuario
    int i, j; // Vari�veis de controle para os la�os 'for' (i para linhas, j para colunas)

    //entrada e validacao do numero

    printf("Digite um numero inteiro positivo(limite de ate o numero 20): ");
    scanf("%d", &n);

    //Validacao garante que o numero esteja entre 1 e 10.
    //Enquanto o numero for invalido o program pedira novamente
    while (n<= 0 || n > 10){
        printf("\nValor inv�lido!! Por favor, Digite um n�mero v�lido de 1 a 20...");
        scanf("%d", &n);
    }

    printf("\n");

    //gerando o quadro dos numeros

    //laco de repeti�ao interno: Controla Colunas as linhas do quadro
    //ele sera executado 'n' vezes, uma para cada linha

    for(j = 1; j <= n; j++){

        //laco de repeticao inteirno: contola as colunas de cada linha
        //Para cada linha este laco tambem sera executado 'n' vezes
        for (j = 1; j <= n; i++){
            //A formula para encontra o numero correto e (linha + coluna - 1)
            // Imprime o resultado da f�rmula.
            // O "%3d" formata o n�mero para ocupar 3 espa�os, alinhando o quadro.
            printf("%3d", i + j - 1);
        }

        //Apos o laco interno terminar (uma linha inteira foi impressa)
        // pulamos para a pr�xima linha para come�ar a pr�xima itera��o do la�o externo.
        printf("\n");
    }

    return 0;

 }
