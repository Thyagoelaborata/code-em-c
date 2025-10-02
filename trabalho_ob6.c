#include <stdio.h>
#include <string.h> // Necess�rio para usar a fun��o strlen() e strcspn()
#include <ctype.h>  // Necess�rio para usar a fun��o tolower()
#include <locale.h> // Necess�rio para usar acentua��o em portugu�s no console

/*6 Crie um programa para ler uma palavra do teclado e informar
 quantas vogais existem nessa palavra.*/


 int main(){
     // Define o locale para portugu�s para permitir a exibi��o correta de acentos.
    setlocale(LC_ALL, "Portuguese");

    // Declara um array de caracteres (string) para armazenar a palavra.
    // O tamanho 101 permite at� 100 caracteres mais o caractere nulo final ('\0').
    char palavra[101];

    //array para armazenar vogais que foram encontradas
    char vogaisEncontradas[101];
    int indiceVogais = 0; //Ira controla a posicao no array 'vogaisEncontradas'

    // variavel par armazenar a contagem de vogais, inicializada em 0.
    int contadorVogais = 0;
    int i;


    //Solicita que o usuario digite uma palavra.
    printf("Digite uma Palavra:  ");

    // L� a palavra digitada pelo usu�rio do teclado.
    // Usamos fgets() em vez de scanf() porque � mais seguro e evita problemas
    // de estouro de buffer (buffer overflow).
    // Ele l� a linha inteira, incluindo o caractere de nova linha '\n' no final.
    fgets(palavra, sizeof(palavra), stdin);

    // Remove o caractere de nova linha ('\n') que o fgets() captura.
    // A fun��o strcspn encontra o �ndice do primeiro '\n' na string.
    // Substitu�mos esse caractere por '\0' (o terminador de string),
    // finalizando a string de forma limpa.
    palavra[strcspn(palavra, "\n")] = '\0';

    // Loop 'for' que percorre cada caractere da string 'palavra'.
    // O loop continua enquanto 'i' for menor que o comprimento total da palavra.
    for (i = 0; i < strlen(palavra); i++) {
        // Converte o caractere atual para min�sculo usando tolower().
        // Isso simplifica a verifica��o, pois n�o precisamos checar
        // separadamente por 'A', 'E', 'I', 'O', 'U'.
        char caractereAtual = tolower(palavra[i]);

    // Verifica se o caractere atual (j� em min�sculo) � uma das vogais.
        if (caractereAtual == 'a' || caractereAtual == 'e' || caractereAtual == 'i' || caractereAtual == 'o' || caractereAtual == 'u') {
            // Se for uma vogal, incrementa o contador.
            contadorVogais++;

            //Guarda a vogal encontrada no nosso novo array ---
            vogaisEncontradas[indiceVogais] = caractereAtual;
            // E avan�a o �ndice para a pr�xima posi��o livre
            indiceVogais++;
        }
    }

    //Finaliza a string de vogais com o caractere nulo ---
    // Isso � importante para que o C entenda onde a nossa lista de vogais termina.
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
