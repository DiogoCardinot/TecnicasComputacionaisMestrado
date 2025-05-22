//Diogo Alves Cardinot

//Q1

/*
Uma matriz quadrada inteira � denominada �matriz interessante� se as seguintes condi��es s�o atendidas:
a. a soma de todos os seus elementos � igual � multiplica��o dos elementos da diagonal principal;
b. para cada linha, a multiplica��o dos seus elementos gera um valor m�ltiplo de 3;
c. a soma dos elementos da primeira coluna � igual � multiplica��o dos elementos da �ltima coluna.

Escreva um programa que verifica se uma matriz de n linhas e n colunas representa uma matriz interessante. (valor da quest�o: 3,4)
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdio.h>
#include<string.h>


void main(){
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas.\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas.\n");
    scanf("%d", &colunas);

    int mat[linhas][colunas];

    printf("\nPreencha a matriz:\n");
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz.\n");
    for(i=0; i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }
    int soma_elementos= 0;
    int  mult_diagonal = 1;
    int soma_primeira_coluna = 0;
    int mult_ultima_coluna = 1;
    int divideTres = 0;

    for(i=0; i<linhas;i++){
        int mult_elementos_linha = 1;
        for(j=0;j<colunas;j++){
            soma_elementos += mat[i][j];
            //elementos da diagonal
            if(i==j){
                mult_diagonal*= mat[i][j];
            }
            //elementos da primeira coluna para todas as linhas
            if(j==0){
                soma_primeira_coluna += mat[i][j];
            }
            // elementos da ultima coluna para todas as linhas
            if(j==colunas-1){
                mult_ultima_coluna *= mat[i][j];
            }
            mult_elementos_linha *= mat[i][j];
        }
        if(mult_elementos_linha%3!= 0){
            divideTres +=1;
        }
        printf("\nMult da linha %d: %d\n", i+1,mult_elementos_linha);
    }

    printf("\nSoma de todos os elementos: %d", soma_elementos);
    printf("\nMultiplicacao da diagonal: %d", mult_diagonal);
    printf("\nSoma da primeira coluna: %d", soma_primeira_coluna);
    printf("\nMultiplicacao da ultima coluna: %d", mult_ultima_coluna);

    if(soma_elementos != mult_diagonal){
        printf("\n\nMatriz nao eh interessante.\nA soma dos elementos eh diferente da multiplicacao da diagonal.");
    }else if(soma_primeira_coluna!= mult_ultima_coluna){
        printf("\n\nMatriz nao eh interessante.\nA soma dos elementos da primeira coluna eh diferente da multiplicacao da ultima coluna.");
    }else if(divideTres>0){
        printf("\n\nMatriz nao eh interessante.\nA multiplicacao dos elementos de pelo menos uma linha nao eh divisivel por 3.");
    }
    else{
        printf("\n\nA matriz eh interessante.");
    }

}

*/

//Q2

/*
Escreva um programa para receber um n�mero inteiro positivo (fornecido pelo usu�rio) e converter em seu respectivo n�mero bin�rio, imprimindo-o na tela.
Por exemplo: caso o usu�rio entre com o n�mero 54, o programa deve retornar 110110. Caso o n�mero digitado seja negativo, o programa dever� retornar uma mensagem de
erro (ex: �ERRO: N�mero inv�lido�). (valor da quest�o: 3,3)

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
    int numero;
    int i;
    int expoente = 0;
    int potencia;

    printf("Digite o numero.\n");
    scanf("%d", &numero);
    if(numero<0){
        printf("\nERRO: N�mero inv�lido.");
        return;
    }
    while(1){
        potencia = pow(2, expoente);
        if(numero/potencia>0){
            expoente++;
        }else{
            break;
        }
    }
    printf("\nNumero em binario:\n");
    for(i=expoente-1; i>=0; i--){
        potencia = pow(2, i);
        if(numero>=potencia){
            printf("1");
            numero = numero - potencia;
        }else if(numero<potencia){
            printf("0");
        }
    }
}
*/

//Q3

/*
Solucione o problema do quadrado m�gico para um dado n�mero n �mpar sem o uso de recurs�o. O quadrado m�gico � um arranjo de n�meros de 1 a n� em uma matriz [n x n]
onde cada n�mero ocorre apenas uma vez e onde o somat�rio de cada linha, cada coluna e cada diagonal � o mesmo. O programa dever� receber um n�mero n e imprimir a solu��o do
 problema na forma de uma matriz se n for �mpar, em tela.
(valor da quest�o: 3,3)
> Introduza a dimensao : 3
8 1 6
3 5 7
4 9 2
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int dimensao, i, j;

    printf("Digite a dimensao da matriz.\n");
    scanf("%d", &dimensao);

    int mat[dimensao][dimensao];

    if(dimensao%2==0){
        printf("A dimensao da matriz deve ser impar.\n");
        return;
    }

    for(i=0; i<dimensao; i++){
        for(j=0; j<dimensao; j++){
            mat[i][j]=0;
        }
    }
    int linha = 0;
    int coluna = dimensao / 2;
    int dimensao_q = pow(dimensao, 2);
    int linha_antiga, coluna_antiga;
    for(i=1; i<=dimensao_q; i++){
        mat[linha][coluna] = i;

        linha_antiga = linha;
        coluna_antiga = coluna;

        linha -=1;
        coluna+=1;
        if(linha<0){
            linha = dimensao-1;
        }
        if(coluna>=dimensao){
            coluna = 0;
        }
        if(mat[linha][coluna]!=0){
            linha = linha_antiga +1;
            coluna = coluna_antiga;
        }
    }

    printf("\nMatriz final:\n");
     for(i=0; i<dimensao; i++){
        for(j=0; j<dimensao; j++){
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

}


