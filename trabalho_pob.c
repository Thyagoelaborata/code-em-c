#include<stdio.h>

/*Crie um programa para ler 3 n�meros do teclado e informar se estes n�meros podem formar
um tri�ngulo. Se puder formar um tri�ngulo, mostrar se formam um tri�ngulo equil�tero,
is�sceles ou escaleno.
 Obs: Para formar um tri�ngulo um n�mero n�o pode ser maior que a soma dos
outros dois.*/

int main (){

    // declarando variaveis
    float a, b, c;

    // pedindo para o usuario digitar os valores
    printf("Digite o primeiro numero.." );
    scanf("%f", &a);

    printf("Digite o segundo numero.." );
    scanf("%f", &b);

    printf("Digite o ultimo numero.." );
    scanf("%f", &c);

    //verifica se os numeros digitados iram formar algum triangulo
    if(a + b > c && b + c > a && c + a > b){
        printf("Os numeros podem formar um triangulo.\n");

        //condicoes de cada triangulo
        if(a == b && b == c){
            printf("Os numeros formam um Triangulo equilatero.\n");
        } else if (a == b || a == c || b == c){
            printf("Os numeros formam um triangulo Isoceles.\n");
        }else {
            printf("Os numeros forma um triangulo scaleno");
        }

    //caso nenhum do requisitos seja feito
    }else("Os numeros n�o formam nenhum Triangulo.\n");

    return 0;
}
