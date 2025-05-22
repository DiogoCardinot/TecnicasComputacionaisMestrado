// Diogo Alves Cardinot

//Q1

/*
Faça um programa que, dada uma matriz inteira A(mxn) e uma matriz inteira B(mxn), verifique se o somatório dos elementos das colunas ímpares (colunas 1, 3, 5, ...) da matriz A
é maior do que a multiplicação de todos os elementos pares da matriz B (lembrando que se não houver nenhum elemento par em B, o resultado dessa multiplicação será igual a 0).
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas das matrizes.\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas das matrizes.\n");
    scanf("%d", &colunas);

    int A[linhas][colunas];
    int B[linhas][colunas];
    printf("Preencha a matriz A:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas;j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Preencha a matriz B:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas;j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nMatriz A:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas;j++){
            printf("%d \t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz B:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas;j++){
            printf("%d \t", B[i][j]);
        }
        printf("\n");
    }
    int mult_pares_b = 1;
    int quant_pares= 0;
    int soma_coluna_impar_a =0;
    for(j=0; j<colunas; j++){
        for(i=0; i<linhas;i++){
            if(j%2==0){
                soma_coluna_impar_a += A[i][j];
            }
        }
    }
    for(j=0; j<colunas; j++){
        for(i=0; i<linhas;i++){
            if(B[i][j]%2==0){
                mult_pares_b*= B[i][j];
                quant_pares++;
            }
        }
    }
    printf("\n");
    printf("\nSoma das colunas impares de A: %d", soma_coluna_impar_a);
    printf("\nMultiplicacao dos pares de B: %d", mult_pares_b);
    printf("\nQuantidade de pares de B: %d", quant_pares);
    if(quant_pares ==0){
        mult_pares_b=0;
    }
    if(soma_coluna_impar_a>mult_pares_b){
        printf("\nA soma das colunas impares de A eh maior que a multiplicacao dos elementos pares de B.");
    }
    else{
        printf("\nA soma das colunas impares de A nao eh maior que a multiplicacao dos elementos pares de B.");
    }
}*/

//Q2

/*
Escreva uma função, denominada espelhado, que retorna 1 se o número inteiro, recebido como argumento, é igual ao seu número invertido. Para facilitar a compreensão,
ilustra-se 123 como o número invertido de 321, ou 425 como o número invertido de 5240. Desse modo, espelhado(121) retornaria 1, espelhado(2002) retornaria 1, espelhado(1210)
retornaria 0 e espelhado(432) retornaria 0.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

int espelhado(int numero);

void main(){
    int numero;

    printf("Digite o numero para verificar se e espelhado.\n");
    scanf("%d", &numero);

    printf("%d", espelhado(numero));
}

int espelhado(int numero){
    int novo_numero = numero;
    int i;

    int tam_numero =0;
    if(numero==0){
        tam_numero++;
    }else{
        while(numero>0){
            numero = numero/10;
            tam_numero++;
        }
    }
    int vetor_numero[tam_numero];
    int vetor_numero_inverso[tam_numero];

    for(i=0; i<tam_numero;i++){
        vetor_numero[tam_numero-1-i] = novo_numero%10;
        vetor_numero_inverso[i] = novo_numero%10;
        novo_numero=novo_numero/10;
    }
    int diferentes=0;
    for(i=0; i<tam_numero;i++){
        if(vetor_numero[i] != vetor_numero_inverso[i]){
            diferentes++;
        }
    }
    if(diferentes==0){
        return 1;
    }
    else{
        return 0;
    }

}*/

//Q3

/*
O histograma é um gráfico que representa a frequência de ocorrência de um determinado evento em um conjunto de dados. O evento pode ser um número em um conjunto de
dados numéricos. Desta forma, escreva um programa para o usuário entrar com 10 valores inteiros de 3 bits (0 a 7, inclusive) e carregá-los em um vetor de entrada. Caso algum valor
de entrada esteja fora da faixa de valores válidos (0 a 7), o programa deve solicitar um novo valor de entrada ao usuário. Em seguida, o programa deverá acessar esse vetor de entrada e
retornar o histograma na forma de um vetor de ocorrências de tamanho igual a 8 para cada um dos valores. Por exemplo:

Vetor de entrada: 1 1 0 3 2 6 4 2 4 1
Vetor de saída: 1 3 2 1 2 0 1 0
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int quantidade_bits, tam_vetor, i;

    printf("Digite a quantidade de bits que deseja utilizar.\n");
    scanf("%d", &quantidade_bits);

    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &tam_vetor);

    int vetor[tam_vetor];
    int tam_histograma = pow(2, quantidade_bits);
    int histograma[tam_histograma];

    int testa_valor;
    printf("Preencha o vetor.\n");
    for(i=0; i<tam_vetor; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &testa_valor);
        if(testa_valor<0 || testa_valor>(tam_histograma-1)){
            printf("Elemento invalido. Tente novamente.\nValores permitidos: 0-%d\n",tam_histograma-1);
            i--;
        }else{
            vetor[i]= testa_valor;
        }
    }
    for(i=0; i<tam_histograma; i++){
        histograma[i] =0;
    }

    for(i=0; i<tam_vetor; i++){
        histograma[vetor[i]] +=1;
    }
    printf("\nHistograma final:\n");
    for(i=0; i<tam_histograma; i++){
        printf("%d \t", histograma[i]);
    }
}
*/

//Q4

/*
Um número de Munchausen é o número inteiro n onde a soma de seus dígitos elevados à potência de si mesmo dá n.

Exemplo:
3435 = 3^3 + 4^4 + 3^3 + 5^5

Encontre os números de Munchausen entre 1 e 100.000.

Obs: Apesar de 0^0 ser indefinido matematicamente, consideraremos 0^0 = 1 na presente questão.
*/
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int numero, limite_maximo, i, j;

    printf("Digite o limite maximo de busca.\n");
    scanf("%d", &limite_maximo);

    for(i=1; i<=limite_maximo; i++){
        int tam_numero=0;
        numero=i;
        int num_aux = numero;
        //Pegar o tamanho do numero
        if(i==0){
            tam_numero++;
        }else{
            while(numero>0){
                tam_numero++;
                numero=numero/10;
            }
        }
        //Salvando o numero em um vetor
        int vetor_numero[tam_numero];

        for(j=0; j<tam_numero; j++){
            vetor_numero[tam_numero-1-j] = num_aux%10;
            num_aux = num_aux/10;
        }
        //Calculando o numero final para comparar com o inicial
        int num_final = 0;
        for(j=0; j<tam_numero; j++){
            if(vetor_numero[j]==0){
                num_final +=1;
            }else{
                num_final += pow((vetor_numero[j]), (vetor_numero[j]));
            }

        }
        if(i==num_final){
            printf("%d\n", i);
        }
    }
}
