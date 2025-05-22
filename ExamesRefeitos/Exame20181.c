//Diogo Alves Cardinot

//Q1

/*

Escreva uma função, denominada exerc1, que recebe um número inteiro positivo como argumento e que retorna 1 se todos os dígitos forem pares e se a soma deles for maior do que 10,
e retorna 0, caso contrário.
Por exemplo:

exerc1(242) retorna 0

exerc1(236) retorna 0

exerc1(246) retorna 1

exerc1(66) retorna 1
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

int exerc1(int numero);

void main(){
    int numero;
    printf("Digite o numero.\n");
    scanf("%d", &numero);
    printf("%d", exerc1(numero));
}

int exerc1(int numero){
    int novo_numero=numero;
    int casas_numero=0;
    if(numero==0){
        casas_numero++;
    }else{
        while(numero>0){
            casas_numero++;
            numero=numero/10;
        }
    }
    int vetor_numero[casas_numero];
    int i;
    for(i=0; i<casas_numero; i++){
        vetor_numero[casas_numero-1-i] = novo_numero%10;
        novo_numero = novo_numero/10;

    }
    int par =0;
    int soma =0;
    for(i=0; i<casas_numero; i++){
       if(vetor_numero[i]%2!=0){
            par++;
       }
       soma+= vetor_numero[i];
    }

    if(par==0 && soma>10){
        return 1;
    }
    else{
        return 0;
    }
}
*/

//Q2

/*
Uma matriz quadrada inteira é chamada de "quadrado especial" se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos
elementos da diagonal principal são todos iguais.

Exemplo: A matriz abaixo representa um quadrado especial:
| 8  0  7 |
| 4  5  6 |
| 3 10  2 |
Escreva um programa que verifica se uma matriz de n linhas e n colunas representa um quadrado especial.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int dimensao_matriz;
    int i,j;
    int soma_diagonal = 0;

    printf("Digite a dimensao da matriz.\n");
    scanf("%d", &dimensao_matriz);

    int matriz[dimensao_matriz][dimensao_matriz];

    printf("Preencha a matriz.\n");
    for(i=0; i<dimensao_matriz; i++){
        for(j=0;j<dimensao_matriz; j++){
            printf("Linha: %d, Coluna: %d\n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(i==j){
                soma_diagonal += matriz[i][j];
           }
        }
    }

    printf("\nMatriz:\n");
    for(i=0; i<dimensao_matriz; i++){
        for(j=0;j<dimensao_matriz; j++){
           printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<dimensao_matriz; i++){
        int soma_linha = 0;
        int soma_coluna = 0;
        for(j=0;j<dimensao_matriz; j++){
          soma_linha+= matriz[i][j];
          soma_coluna +=matriz[j][i];
        }
        printf("\n\nSoma coluna %d: %d", i+1, soma_coluna);
        printf("\nSoma linha %d: %d", i+1, soma_linha);
        printf("\nSoma diagonal: %d\n\n", soma_diagonal);

        if(soma_linha != soma_diagonal){
            printf("\nSoma da linha %d diferente da soma da diagonal.", i+1);
            printf("\nSoma da linha %d: %d", i+1,soma_linha);
            printf("\n\nSoma da diagonal: %d", soma_diagonal);
            printf("\n\nA matriz nao eh quadrado especial.\n");
            return;
        }
        if(soma_coluna != soma_diagonal){
            printf("\nSoma da coluna %d diferente da soma da diagonal.", i+1);
            printf("\nSoma da coluna %d: %d", i+1,soma_coluna);
            printf("\n\nSoma da diagonal: %d", soma_diagonal);
            printf("\n\nA matriz nao eh quadrado especial.\n");
            return;
        }

    }
    printf("\nA matriz eh quadrado especial.");

}
*/


//Q4

/*
Dado um vetor não ordenado de tamanho N, escreva um programa que encontre a maior distância entre dois elementos deste vetor.

Exemplos:

Input : vetor = {3, 10, 6, 7} N = 4
Output : 7 – a maior distância encontra-se entre os elementos 3 e 10

Input : vetor = {-3, -1, 6, 7, 0} N = 5
Output : 10 – a maior distância encontra-se entre os elementos -3 e 7
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int tamanho_vetor;

    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &tamanho_vetor);
    int vetor[tamanho_vetor];
    int i;
    int maior_valor = -1000000;
    int menor_valor = 1000000;

    printf("Preencha o vetor.\n");
    for(i=0; i<tamanho_vetor; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<tamanho_vetor; i++){
        printf("%d \n", vetor[i]);
        if(vetor[i]> maior_valor){
            maior_valor = vetor[i];
        }
        if(vetor[i]< menor_valor){
            menor_valor = vetor[i];
        }
    }

    //printf("\nMaior valor : %d", maior_valor);
    //printf("\nMenor valor : %d", menor_valor);

    printf("\nA maior distancia entre os valores eh: %d", maior_valor-menor_valor);
}
*/

//Q3

/*
Escreva uma função que receba um vetor de 10 elementos inteiros e positivos, e retorne o mínimo múltiplo comum entre o maior e menor número do vetor.
Caso o vetor de entrada possua algum elemento negativo, a função deve retornar -1.

Exemplo, para o vetor v seguinte, a função deve retornar 60:

v = [15 30 29 12 18 19 22 16 13 12]
*/
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

int mmcFunc(int vet[], int tamanho_vetor);

void main(){
    int tamanho_vetor = 10;

    int vetor[tamanho_vetor];
    int i,j;
    int menor = 1000000;
    int maior = -1000000;

    printf("Preencha o vetor.\n");
    for(i=0; i<tamanho_vetor; i++){
        printf("Elemento %d: \n", i+1);
        scanf("%d", &vetor[i]);
    }

    //Verificando se tem numero negativo e pegando o maior e menor valor do vetor
    for(i=0; i<tamanho_vetor; i++){
        if(vetor[i]<0){
            printf("\nTodos os valores do vetor devem ser positivos.\n");
            return;
        }
    }
    printf("\nO mmc entre o maior e menor valor do vetor eh: %d", mmcFunc(vetor, tamanho_vetor));
}


int mmcFunc(int vetor[], int tamanho_vetor){
    int i,j;
    int menor = 1000000;
    int maior = -1000000;

    //Pega o maior e menor numero do vetor
    for(i=0; i<tamanho_vetor; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }

    //Identificando quantos primos tem ate o maior numero
    int tamanho_primos = 0;
    for(i=2; i<=maior; i++){
        int ehPrimo = 0;
        for(j=2; j<i; j++){
            if(i%j==0){
                ehPrimo +=1;
            }
        }
        if(ehPrimo ==0){
            tamanho_primos++;
        }
    }
    //Salvando os primos em um vetor, para dividir depois
    int primos[tamanho_primos];
    int d=0;
    for(i=2; i<=maior; i++){
        int ehPrimo = 0;
        for(j=2; j<i; j++){
            if(i%j==0){
                ehPrimo +=1;
            }
        }
        if(ehPrimo ==0){
            primos[d] = i;
            d++;
        }
    }

    int mmc=1;
    while(maior!=1 || menor!=1){
        for(i=0; i<tamanho_primos;i++){
            if(menor%primos[i]==0 && maior%primos[i]==0){
                maior = maior/primos[i];
                menor = menor/primos[i];
                mmc*= primos[i];
                i=0;
            }else if(menor%primos[i]==0){
                menor = menor/primos[i];
                mmc*= primos[i];
                i=0;
            }else if(maior%primos[i]==0){
                maior= maior/primos[i];
                mmc*= primos[i];
                i=0;
            }else{
                i++;
            }
        }
    }
    return mmc;
}

