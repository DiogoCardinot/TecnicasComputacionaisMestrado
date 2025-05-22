//Diogo Alves Cardinot

//Q1

/*
Faça uma programa para reorganizar um vetor de forma que os valores dos elementos de índices ímpares são
maiores do que seus dois vizinhos próximos (elemento a esquerda e elemento à direita). (valor da questão:
2,5).
Por exemplo, para o vetor v={6,4,2,1,8,3} o programa deve retornar o vetor {4,6,1,8,2,3}.
Outro exemplo: para o vetor de entrada v={5,2,1,0,3,3} o programa deve retornar {2,5,0,3,1,3}.

*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int tamanho_vetor;
    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &tamanho_vetor);
    int vetor[tamanho_vetor];
    int i, aux;
    printf("\nPreencha o vetor.\n");
    for(i=0; i<tamanho_vetor;i++){
        printf("Elemento %d:", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor antigo.\n");
    for(i=0; i<tamanho_vetor; i++){
        printf("%d \t", vetor[i]);
    }

    for(i=1; i<tamanho_vetor-1; i+=2){
        if(vetor[i]< vetor[i-1]){
            aux =vetor[i];
            vetor[i] = vetor[i-1];
            vetor[i-1] = aux;
        }if(vetor[i]< vetor[i+1]){
            aux = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = aux;
        }
    }
    printf("\nVetor novo.\n");
    for(i=0; i<tamanho_vetor; i++){
        printf("%d \t", vetor[i]);
    }

}
*/

//Q2

/*
Escreva um programa para receber um número inteiro positivo (fornecido pelo usuário) e converter em
seu respectivo número binário, imprimindo-o na tela. Por exemplo: caso o usuário entre com o número 54, o
programa deve retornar 110110. Caso o número digitado seja negativo, o programa deverá retornar uma
mensagem de erro (ex: “ERRO: Número inválido”). (valor da questão: 2,5)
> Digite o numero a ser convertido para binario: 54
110110
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int numero, potencia, i;
    int expoente=0;

    printf("Digite um numero inteiro positivo.\n");
    scanf("%d", &numero);

    if(numero<0){
        printf("ERRO: numero invalido.\n");
        return;
    }
    while(1){
        potencia= pow(2, expoente);
        if(numero/potencia>0){
            expoente++;
        }else{
            break;
        }
    }

    for(i=expoente-1; i>=0; i--){
        potencia = pow(2,i);
        if(numero>=potencia){
            printf("1");
            numero = numero-potencia;
        }else{
            printf("0");
        }
    }

}

*/

//Q3

/*
Faça uma função recursiva para calcular a somatória de todos os números de 1 a N (N será lido do teclado),
imprimindo o resultado na tela.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

int calculaSomatoria(int numero);

void main(){
    int numero,i;

    printf("Digite um numero.\n");
    scanf("%d", &numero);


    for(i=1; i<=numero; i++){
        printf("%d + %d : %d\n",calculaSomatoria(i-1),i, calculaSomatoria(i));
    }

    printf("\nSomatorio final:\n");
    printf("%d", calculaSomatoria(numero));
}

int calculaSomatoria(int numero){
    if(numero==0){
        return 0;
    }else if(numero ==1){
        return 1;
    }else{
        return numero + calculaSomatoria(numero-1);
    }
}
*/

//Q4

/*
Utilizando alocação dinâmica de memória, escreva uma rotina na qual duas matrizes n por n são somadas (os
elementos das matrizes são do tipo float). Os valores de n e dos elementos das matrizes são fornecidos via
teclado e o resultado da soma deve ser impresso em tela.
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int dimensaoMatriz,i,j;

    printf("Digite a dimensao da matriz quadrada. \n");
    scanf("%d", &dimensaoMatriz);

    float **mat1 = malloc(dimensaoMatriz*sizeof(float*));
    float **mat2 = malloc(dimensaoMatriz*sizeof(float*));

    for(i=0; i<dimensaoMatriz; i++){
        mat1[i] = malloc(dimensaoMatriz*sizeof(float));
        mat2[i] = malloc(dimensaoMatriz*sizeof(float));
    }
    //Preenchendo matriz 1
    printf("\nPreencha a primeira matriz.\n");
    for(i=0;i<dimensaoMatriz; i++){
        for(j=0;j<dimensaoMatriz; j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%f", &mat1[i][j]);
        }
    }
    //Preenchendo matriz 2
    printf("\nPreencha a segunda matriz.\n");
    for(i=0;i<dimensaoMatriz; i++){
        for(j=0;j<dimensaoMatriz; j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%f", &mat2[i][j]);
        }
    }
    printf("\nMatriz 1:\n");
    for(i=0;i<dimensaoMatriz; i++){
        for(j=0;j<dimensaoMatriz; j++){
            printf("%f \t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");
    for(i=0;i<dimensaoMatriz; i++){
        for(j=0;j<dimensaoMatriz; j++){
            printf("%f \t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 1 + Matriz 2:\n");
    for(i=0;i<dimensaoMatriz; i++){
        for(j=0;j<dimensaoMatriz; j++){
            printf("%f \t", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<dimensaoMatriz; i++){
        free(mat1[i]);
        free(mat2[i]);
    }
    free(mat1);
    free(mat2);

}
