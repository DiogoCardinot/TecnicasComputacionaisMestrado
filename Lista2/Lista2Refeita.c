//Q1

/*
Escrever um programa para imprimir em um arquivo de sa�da
os n primeiros n�meros naturais, onde n � um n�mero recebido pelo teclado.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int num, i;
    FILE *arquivo_saida;
    arquivo_saida = fopen("Q1Refeita.txt", "w+");

    printf("Digite o numero maximo: ");
    scanf("%d", &num);
    fprintf(arquivo_saida,"Numeros naturais ate %d:\n", num);
    printf("Numeros naturais ate %d:\n", num);
    for(i=0; i<=num; i++){
        fprintf(arquivo_saida, "%d\n", i);
        printf("%d\n", i);
    }

    fclose(arquivo_saida);
}
*/

//Q2

/*
 Escrever um programa para imprimir na tela a soma de 1 at�
n, onde n � um n�mero natural recebido pelo teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int num, i;
    printf("Digite o numero maximo da soma: ");
    scanf("%d", &num);
    int soma =0;
    for(i=1; i<=num; i++){
        soma+=i;
    }

    printf("A soma final eh: %d", soma);
}
*/

//Q3

/*
Escrever um programa que conta quantos d�gitos tem um
n�mero n recebido pelo teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int num, tam_num;
    tam_num =0;

    printf("Digite o numero: ");
    scanf("%d", &num);

    while(num>0){
        tam_num++;
        num = num/10;
    }

    printf("O numero tem %d digitos.", tam_num);
}
*/

//Q5

/*
Escreva um programa para imprimir em dois arquivos de sa�da diferentes, dentro
de certa faixa dada via teclado, os n�meros naturais �mpares e pares. Utilize recursividade
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    FILE *saida_ParRefeita, *saida_ImparRefeita;
    saida_ParRefeita = fopen("Q5RefeitaPar.txt", "w+");
    saida_ImparRefeita = fopen("Q5RefeitaImpar.txt", "w+");
    //Par
    printf("Pares:\n");
    fprintf(saida_ParRefeita, "Pares: \n");
    for(i=0; i<=num;i++){
        if(i%2==0){
            printf("%d\n", i);
            fprintf(saida_ParRefeita, "%d \n", i);
        }
    }
    //Impar
    printf("Impares:\n");
    fprintf(saida_ImparRefeita, "Impares: \n");
    for(i=0; i<=num;i++){
        if(i%2!=0){
            printf("%d\n", i);
            fprintf(saida_ImparRefeita, "%d \n", i);
        }
    }
    fclose(saida_ParRefeita);
    fclose(saida_ImparRefeita);

}
*/

//Q6

/*
Escreva um programa para copiar uma string (recebida de arquivo) para outra
(impressa em arquivo). Considere que as strings tem tamanho
m�ximo igual a 50.
*/
/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
#include<stdlib.h>

void main(){
    FILE *stringEntrada, *stringSaida;

    stringEntrada = fopen("stringEntradaQ6.txt", "rt");
    stringSaida = fopen("stringSaidaQ6Refeita.txt", "w+");

    char string[50];

    fscanf(stringEntrada, "%s", string);
    fprintf(stringSaida, "%s", string);

    fclose(stringEntrada);
    fclose(stringSaida);
}
*/

//Q7

/*
 Escrever um programa no qual dois n�meros s�o recebidos via teclado e � escolhida,
tamb�m via teclado, uma opera��o a ser realizada dentre soma, subtra��o, multiplica��o e divis�o.
Aplique o condicional if-else na codifica��o.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int escolha;
    float num1, num2;

    printf("Digite o numero 1: ");
    scanf("%d", &num1);
    printf("Digite o numero 2: ");
    scanf("%d", &num2);

    printf("Escolha uma das operacoes:\n1- Soma.\n2- Subtracao.\n3- Multiplicacao.\n4- Divisao.\n");
    scanf("%d", &escolha);


    if(escolha==1){
        printf("A soma dos numeros eh: %f", num1+num2);
    }else if(escolha==2){
        printf("A subtracao dos numeros eh: %f", num1-num2);
    }else if(escolha==3){
        printf("A multiplicacao entre os numeros eh: %f", num1*num2);
    }else if(escolha==4){
        printf("A divisao entre os numeros eh: %f", num1/num2);
    }else{
        printf("Escolha uma opcao valida.");
    }

}
*/

//Q8

/*
Repita o exerc�cio acima utilizando o comando switch-case, recebendo as informa��es via arquivo de entrada e imprimindo o resultado em um arquivo de s�ida.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    FILE *dadosEntrada, *dadosSaida;
    dadosEntrada = fopen("dadosEntradaQ8.txt", "rt");
    dadosSaida = fopen("dadosSaidaQ8Refeita.txt", "w+");

    float num1, num2;
    int escolha;
    char texto[50];

    fscanf(dadosEntrada, "%s %f", texto, &num1);
    fscanf(dadosEntrada, "%s %f", texto, &num2);
    fscanf(dadosEntrada, "%s %d", texto, &escolha);
    printf("Numero 1: %f\n", num1);
    printf("Numero 2: %f\n", num2);
    printf("Escolha: %d\n", escolha);

    if(escolha==1){
        fprintf(dadosSaida, "A soma dos numeros eh: %f", num1+num2);
        printf("A soma dos numeros eh: %f", num1+num2);
    }else if(escolha==2){
        fprintf(dadosSaida, "A subtracao dos numeros eh: %f", num1-num2);
        printf("A subtracao dos numeros eh: %f", num1-num2);
    }else if(escolha==3){
        fprintf(dadosSaida, "A multiplicacao dos numeros eh: %f", num1*num2);
        printf("A multiplicacao entre os numeros eh: %f", num1*num2);
    }else if(escolha==4){
        fprintf(dadosSaida, "A divisao dos numeros eh: %f", num1/num2);
        printf("A divisao entre os numeros eh: %f", num1/num2);
    }else{
        fprintf(dadosSaida, "Escolha uma opcao valida.");
        printf("Escolha uma opcao valida.");
    }

    fclose(dadosEntrada);
    fclose(dadosSaida);

}
*/

//Q9

/*
 Repita o exerc�cio 32 (multiplicacao de matrizes com alocacao dinamica) do M�dulo 1 utilizando arquivos de entrada para receber as
dimens�es das matrizes e seus valores e imprimindo o resultado em um arquivo de
sa�da
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    FILE *dadosEntrada, *dadosSaida;
    dadosEntrada = fopen("matrizesEntradaQ9.txt", "rt");
    dadosSaida = fopen("matrizesSaidaQ9Refeita.txt", "w+");

    char texto[50];
    int linhas1, colunas1, linhas2, colunas2;
    fscanf(dadosEntrada, "%s %d", texto, &linhas1);
    fscanf(dadosEntrada, "%s %d", texto, &colunas1);
    fscanf(dadosEntrada, "%s %d", texto, &linhas2);
    fscanf(dadosEntrada, "%s %d", texto, &colunas2);


    if(colunas1!=linhas2){
        printf("O numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz.\n");
        return;
    }else{
        int i,j,k;
        //criando as matrizes com alocacao dinamica de memoria
        float **matriz1 = malloc(linhas1*sizeof(float*));
        float **matriz2 = malloc(linhas2*sizeof(float*));
        float **matriz3 = malloc(linhas1*sizeof(float*));

        for(i=0; i<linhas1; i++){
            matriz1[i] = malloc(colunas1*sizeof(float));
            matriz3[i] = malloc(colunas2*sizeof(float));
        }
        for(i=0; i<linhas2; i++){
            matriz2[i] = malloc(colunas2*sizeof(float));
        }
        fscanf(dadosEntrada,"%s", texto);
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){
                fscanf(dadosEntrada, "%f", &matriz1[i][j]);
            }
        }
        fscanf(dadosEntrada,"%s", texto);
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){
                fscanf(dadosEntrada, "%f", &matriz2[i][j]);
            }
        }

        //Multiplicacao das matrizes
        for(i=0;i<linhas1; i++){
            for(j=0;j<colunas2; j++){
                float soma =0.0;
                for(k=0; k<colunas1; k++){
                    soma+= matriz1[i][k]*matriz2[k][j];
                }
                matriz3[i][j] = soma;
            }
        }
        //Imprimindo as matrizes no arquivo de saida
        printf("Matriz 1: \n");
        fprintf(dadosSaida, "Matriz 1:\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){
                printf("%f \t", matriz1[i][j]);
                fprintf(dadosSaida, "%f \t", matriz1[i][j]);
            }
            printf("\n");
            fprintf(dadosSaida, "\n");
        }
        printf("Matriz 2: \n");
        fprintf(dadosSaida, "Matriz 2:\n");
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){
                printf("%f \t", matriz2[i][j]);
                fprintf(dadosSaida, "%f \t", matriz2[i][j]);
            }
            printf("\n");
            fprintf(dadosSaida, "\n");
        }
        printf("Matriz 1 * Matriz 2: \n");
        fprintf(dadosSaida, "Matriz 1 * Matriz 2:\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                printf("%f \t", matriz3[i][j]);
                fprintf(dadosSaida, "%f \t", matriz3[i][j]);
            }
            printf("\n");
            fprintf(dadosSaida, "\n");
        }
        //Fechando a alocacao de memoria
         for(i=0; i<linhas1; i++){
            free(matriz1[i]);
            free(matriz3[i]);
        }
        for(i=0; i<linhas2; i++){
            free(matriz2[i]);
        }
        free(matriz1);
        free(matriz2);
        free(matriz3);
    }

    fclose(dadosEntrada);
    fclose(dadosSaida);
}
