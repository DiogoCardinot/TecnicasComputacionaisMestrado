//Q1

/*
 Escrever um programa para imprimir em um arquivo de saída
os n primeiros números naturais, onde n é um número recebido pelo teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    FILE *saidaQ1;
    saidaQ1 = fopen("saidaQ1.txt","w");

    int n,i;
    printf("Digite o limite dos numeros naturais que deseja salvar.\n");
    scanf("%d", &n);

    for(i=0; i<n;i++){
        fprintf(saidaQ1, "%d\n", i+1);
    }

    fclose(saidaQ1);

}
*/

//Q2

/*
Escrever um programa para imprimir na tela a soma de 1 até
n, onde n é um número natural recebido pelo teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int n, soma, i;
    soma = 0;

    printf("Digite um numero.\n");
    scanf("%d", &n);

    for(i=0; i<n;i++){
        soma+=i+1;
        printf("\nNumero: %d\n", i+1);
        printf("Soma: %d\n", soma);
    }
}
*/

//Q3

/*
Escrever um programa que conta quantos dígitos tem um
número n recebido pelo teclado.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int n, i, j;

    printf("Digite um numero.\n");
    scanf("%d", &n);
    i=0;
    if(n==0){
        i=1;
    }
    else{
       while(n>0){
            n=n/10;
            i++;
        }
    }
    printf("Numero de digitos: %d", i);
}
/*

//Q4

/*
Escrever um programa para inverter uma string. Considere
que a string pode ter até 50 caracteres e que é recebida por um arquivo de entrada
e impressa invertida em um arquivo de saída
*/

/*
#include<stdio.h>
#include<string.h>
#include<complex.h>
#include<math.h>
#include<stdlib.h>

void main(){
    char string[50];
    char string_reversa[50];
    FILE *stringEntrada, *stringSaida;

    stringEntrada = fopen("stringEntradaQ4.txt", "rt");
    stringSaida = fopen("stringSaidaQ4.txt","w");

    if (stringEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    fscanf(stringEntrada, "%s", string);

    int i,j;
    j=0;
    //Imprimir cada caixa da string
    printf("Caracteres individuais:\n");
    for (i = 0; string[i] != '\0'; i++) {
        j++;
    }

    for(i=0; i<j; i++){
        string_reversa[i] = string[j-1-i];
    }
    //tem que ter isso aqui para indicar o final da string para imprimir fora do for
    string_reversa[i] = '\0';

    //imprime a string reversa
    printf("%s",string_reversa);

    fprintf(stringSaida, "%s", string_reversa);

    fclose(stringEntrada);
    fclose(stringSaida);
}*/

//Q5

/*
Escreva um programa para imprimir em dois arquivos de saída diferentes, dentro
de certa faixa dada via teclado, os números naturais ímpares e pares.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int n,i;
    FILE *saidaImparQ5, *saidaParQ5;

    printf("Digite um limite maximo.\n");
    scanf("%d", &n);

    saidaImparQ5 = fopen("saidaImparQ5.txt", "w");
    saidaParQ5 = fopen("saidaParQ5.txt", "w");

    for(i=1; i<=n;i++){
        if(i%2==0){
            fprintf(saidaParQ5, "%d\n", i);
        }else{
            fprintf(saidaImparQ5, "%d\n", i);
        }
    }

    fclose(saidaImparQ5);
    fclose(saidaParQ5);
}

*/

//Q6

/*
Escreva um programa para copiar uma string (recebida de arquivo) para outra
(impressa em arquivo). Considere que as strings tem tamanho
máximo igual a 50.
*/

/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
#include<stdlib.h>

void main(){
    char stringEntrada[50];

    FILE *stringEntradaArquivo, *stringSaidaArquivo;

    stringEntradaArquivo = fopen("stringEntradaQ6.txt", "rt");
    stringSaidaArquivo = fopen("stringSaidaQ6.txt", "w");
    fscanf(stringEntradaArquivo, "%s", stringEntrada);
    printf("%s", stringEntrada);

    fprintf(stringSaidaArquivo, "%s", stringEntrada);

    fclose(stringEntradaArquivo);
    fclose(stringSaidaArquivo);

}
*/

//Q7

/*
Escrever um programa no qual dois números são recebidos via teclado e é escolhida,
também via teclado, uma operação a ser realizada dentre soma, subtração, multiplicação e divisão. A operação deve ser realizada na main utilizando ponteiro para
funções. Aplique o condicional if-else na codificação.
*/
/*
//------------------------------------------------ FORMA 1 --------------------------------------------------
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
#include<stdlib.h>

float operacao(int n1, int n2, int escolha);

void main(){
    int n1,n2,escolha;
    float (*pont_funcao)(int, int, int);

    printf("Digite o primeiro numero.\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero.\n");
    scanf("%d", &n2);

    printf("Escolha a operacao:\n1- Soma.\n2- Subtracao.\n3- Multiplicacao.\n4- Divisao.\n");
    scanf("%d", &escolha);
    pont_funcao = operacao;
    float resultado = pont_funcao(n1, n2, escolha);

    printf("\nO resultado da operacao eh: %f", resultado);

}

float operacao(int n1, int n2, int escolha){
    if(escolha==1){
        return n1+n2;
    }else if(escolha==2){
        return n1-n2;
    }else if(escolha==3){
        return n1*n2;
    }else if(escolha==4){
        return n1/n2;
    }
}
*/

//---------------------------------------------------- FORMA 2 -------------------------------------------------
/*
float soma(int a, int b) {
    return a + b;
}

float subtracao(int a, int b) {
    return a - b;
}

float multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
        exit(1); // Encerra o programa com erro
    }
    return (float)a / b; // Força divisão real
}

void main() {
    int n1, n2, escolha;
    float resultado;

    // Ponteiro para função que recebe (int, int) e retorna float
    float (*pont_funcao)(int, int);

    printf("Digite o primeiro numero:\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero:\n");
    scanf("%d", &n2);

    printf("Escolha a operacao:\n1- Soma\n2- Subtracao\n3- Multiplicacao\n4- Divisao\n");
    scanf("%d", &escolha);

    // Escolhe qual função o ponteiro vai apontar usando if-else
    if (escolha == 1) {
        pont_funcao = soma;
    }
    else if (escolha == 2) {
        pont_funcao = subtracao;
    }
    else if (escolha == 3) {
        pont_funcao = multiplicacao;
    }
    else if (escolha == 4) {
        pont_funcao = divisao;
    }
    else {
        printf("Operacao invalida!\n");
        exit(1);
    }

    // Chama a função através do ponteiro
    resultado = pont_funcao(n1, n2);

    printf("\nO resultado da operacao eh: %.2f\n", resultado);
}*/

//Q8

/*
Repita o exercício acima utilizando o comando switch-case, recebendo as informações via arquivo de entrada e imprimindo o resultado em um arquivo de sáida
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

float soma(int n1, int n2);
float subtracao(int n1, int n2);
float multiplicacao(int n1, int n2);
float divisao(int n1, int n2);

void main(){
    char texto[50];
    int n1,n2,operacao;
    float (*pont_func)(int, int);

    FILE *entradaDados, *saidaDados;

    entradaDados = fopen("dadosEntradaQ8.txt", "rt");
    saidaDados = fopen("dadosSaidaQ8.txt","w");

    fscanf(entradaDados, "%s %d", texto, &n1);
    fscanf(entradaDados, "%s %d", texto, &n2);
    fscanf(entradaDados, "%s %d", texto, &operacao);

    if(operacao==1){
        pont_func=soma;
    }else if(operacao==2){
        pont_func= subtracao;
    }else if(operacao==3){
        pont_func = multiplicacao;
    }else if(operacao==4){
        pont_func = divisao;
    }
    float resultado = pont_func(n1,n2);
    printf("%f", resultado);
    fprintf(saidaDados,"O resultado da operacao eh: %f", resultado);
    fclose(entradaDados);
    fclose(saidaDados);

}

float soma(int n1, int n2){
    return n1+n2;
}

float subtracao(int n1, int n2){
    return n1-n2;
}

float multiplicacao(int n1, int n2){
    return n1*n2;
}

float divisao(int n1, int n2){
    return n1/n2;
}

*/


//Q9

/*
Repita o exercício 32 do Módulo 1 utilizando arquivos de entrada para receber as
dimensões das matrizes e seus valores e imprimindo o resultado em um arquivo de
saída.

32 - Escrever um programa, usando alocação dinâmica, para realizar a multiplicação
de duas matrizes. Números de linhas, colunas e valores nas matrizes devem ser
recebidos do teclado.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int linhas1, colunas1, linhas2, colunas2, i, j, k;
    FILE *dadosEntrada, *dadosSaida;
    char texto[50];

    dadosEntrada = fopen("matrizesEntradaQ9.txt", "rt");
    dadosSaida = fopen("matrizSaidaQ9.txt", "w");

    fscanf(dadosEntrada, "%s %d", texto, &linhas1);
    fscanf(dadosEntrada, "%s %d", texto, &colunas1);
    fscanf(dadosEntrada, "%s %d", texto, &linhas2);
    fscanf(dadosEntrada, "%s %d", texto, &colunas2);

    if(colunas1 !=linhas2){
        printf("\nO numero de linhas da primeira matriz deve ser igual ao numero de colunas da segunda matriz.\n");
    }
    else{
        float **mat1, **mat2, **mat3;
        float soma;

        mat1 = malloc(linhas1*sizeof(float*));
        mat2 = malloc(linhas2*sizeof(float*));
        mat3 = malloc(linhas1*sizeof(float*));

        for(i=0; i<linhas1; i++){
            mat1[i] = malloc(colunas1*sizeof(float));
            mat3[i]= malloc(colunas2*sizeof(float));
        }

        for(i=0; i<linhas2; i++){
            mat2[i] = malloc(colunas2*sizeof(float));
        }
        fscanf(dadosEntrada, "%s", texto);
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){

                fscanf(dadosEntrada, "%f", &mat1[i][j]);
            }
        }
        fscanf(dadosEntrada, "%s", texto);
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){

                fscanf(dadosEntrada, "%f", &mat2[i][j]);
            }
        }

        //MULTIPLICACAO DE MATRIZES
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                soma=0.0;
                for(k=0; k<colunas1; k++){
                    soma += mat1[i][k]*mat2[k][j];
                }
                mat3[i][j]= soma;
            }
        }

        printf("\nMatriz 1\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){
                printf("%f \t", mat1[i][j]);
            }
            printf("\n");
        }
        printf("\nMatriz 2\n");
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){
                printf("%f \t", mat2[i][j]);
            }
            printf("\n");
        }
        printf("\nMatriz 3\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                printf("%f \t", mat3[i][j]);
            }
            printf("\n");
        }

        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                fprintf(dadosSaida,"%f \t", mat3[i][j]);
            }
            fprintf(dadosSaida,"\n");
        }

        //LIBERANDO ESPAÇO
        for(i=0; i<linhas1; i++){
            free(mat1[i]);
            free(mat3[i]);
        }

        for(i=0; i<linhas2; i++){
            free(mat2[i]);
        }
        free(mat1);
        free(mat2);
        free(mat3);

    }
    fclose(dadosEntrada);
    fclose(dadosSaida);
}
*/

//Q10

/*
Escreva um programa para receber um número n, informado via arquivo de entrada,
de strings, informadas via arquivo de entrada e de tamanho máximo 50, e fazer a
impressão das strings na tela.
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    char texto[50];
    int n,i;

    FILE *dadosEntrada;
    dadosEntrada = fopen("stringsEntradaQ10.txt", "rt");

    fscanf(dadosEntrada, "%s %d", texto,&n);
    for(i=0; i<n; i++){
        fscanf(dadosEntrada, "%s", texto);
        printf("%s\n", texto);
    }
    fclose(dadosEntrada);
}
