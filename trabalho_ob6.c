#include <stdio.h>
#include <string.h> // Necessário para usar a função strlen() e strcspn()
#include <ctype.h>  // Necessário para usar a função tolower()
#include <locale.h> // Necessário para usar acentuação em português no console

/*6 Crie um programa para ler uma palavra do teclado e informar
 quantas vogais existem nessa palavra.*/


 int main(){
     // Define o locale para português para permitir a exibição correta de acentos.
    setlocale(LC_ALL, "Portuguese");

    // Declara um array de caracteres (string) para armazenar a palavra.
    // O tamanho 101 permite até 100 caracteres mais o caractere nulo final ('\0').
    char palavra[101];

    //array para armazenar vogais que foram encontradas
    char vogaisEncontradas[101];
    int indiceVogais = 0; //Ira controla a posicao no array 'vogaisEncontradas'

    // variavel par armazenar a contagem de vogais, inicializada em 0.
    int contadorVogais = 0;
    int i;


    //Solicita que o usuario digite uma palavra.
    printf("Digite uma Palavra:  ");

    // Lê a palavra digitada pelo usuário do teclado.
    // Usamos fgets() em vez de scanf() porque é mais seguro e evita problemas
    // de estouro de buffer (buffer overflow).
    // Ele lê a linha inteira, incluindo o caractere de nova linha '\n' no final.
    fgets(palavra, sizeof(palavra), stdin);

    // Remove o caractere de nova linha ('\n') que o fgets() captura.
    // A função strcspn encontra o índice do primeiro '\n' na string.
    // Substituímos esse caractere por '\0' (o terminador de string),
    // finalizando a string de forma limpa.
    palavra[strcspn(palavra, "\n")] = '\0';

    // Loop 'for' que percorre cada caractere da string 'palavra'.
    // O loop continua enquanto 'i' for menor que o comprimento total da palavra.
    for (i = 0; i < strlen(palavra); i++) {
        // Converte o caractere atual para minúsculo usando tolower().
        // Isso simplifica a verificação, pois não precisamos checar
        // separadamente por 'A', 'E', 'I', 'O', 'U'.
        char caractereAtual = tolower(palavra[i]);

    // Verifica se o caractere atual (já em minúsculo) é uma das vogais.
        if (caractereAtual == 'a' || caractereAtual == 'e' || caractereAtual == 'i' || caractereAtual == 'o' || caractereAtual == 'u') {
            // Se for uma vogal, incrementa o contador.
            contadorVogais++;

            //Guarda a vogal encontrada no nosso novo array ---
            vogaisEncontradas[indiceVogais] = caractereAtual;
            // E avança o índice para a próxima posição livre
            indiceVogais++;
        }
    }

    //Finaliza a string de vogais com o caractere nulo ---
    // Isso é importante para que o C entenda onde a nossa lista de vogais termina.
    vogaisEncontradas[indiceVogais] = '\0';


    //exibe o resultado final para o usuario
    printf("\nA palavra '%s' possui %d vogais.\n", palavra, contadorVogais);

    //Verifica se alguma vogal foi encontrada para entao exebir
    if (contadorVogais > 0){
        //imprime um separador e abre parenteses para a lista
        printf("(");

        //loop para percorre a lista de vogais que guardamos
        for (i = 0; i < contadorVogais; i++){
            //imprime a vogal atual
            printf("%c", vogaisEncontradas[i]); // %c vem de char


            //Se nao a ultima vogal da lista, imprime uma virgula e um espaco
            if( i < contadorVogais - 1){
                printf(", ");
            }
        }

        //Fecha o parentese no final da lista
        printf(")");
    }
    printf(".\n");
     return 0;
 }
