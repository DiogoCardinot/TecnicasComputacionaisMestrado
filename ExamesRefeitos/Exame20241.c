//Diogo Alves Cardinot

//Q1


/*
Faça um programa para reorganizar um vetor de forma que os valores dos elementos de índices ímpares sejam
maiores do que seus dois vizinhos próximos (elemento à esquerda e elemento à direita).

Por exemplo, para o vetor v={6,4,2,1,8,3} o programa deve retornar o vetor {4,6,1,8,2,3}.
Outro exemplo: para o vetor de entrada v={5,2,1,0,3,3} o programa deve retornar {2,5,0,3,1,3}.
*/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>

void main(){
    int v[] = {2,5,0,3,1,3};
    int i;
    for(i=1; i<5; i += 2){
        // Se o elemento do meio não for maior que os dois vizinhos, fazemos as trocas
        if (v[i] < v[i - 1]) {
            int aux = v[i];
            v[i] = v[i - 1];
            v[i - 1] = aux;
        }
        if (v[i] < v[i + 1]) {
            int aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
    }
    for(i=0; i<6; i++){
        printf("%d, ", v[i]);
    }

}
*/

//Q2

/*
Escreva um programa para receber um número inteiro positivo (fornecido pelo usuário) e converter em seu
respectivo número binário, imprimindo-o na tela. Por exemplo: caso o usuário entre com o número 54, o
programa deve retornar 110110. Caso o número digitado seja negativo, o programa deverá retornar uma
mensagem de erro (ex: “ERRO: Número inválido”).
> Digite o número a ser convertido para binário: 54
110110
*/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>

void main(){
    int numero;

    printf("Por favor, digite o numero a ser verificado. \n");
    scanf("%d", &numero);

    if(numero<0){
        printf("Numero invalido.");
    }
    else{
        int i=0;
        int j;
        //pegando o numero de casas que vai ter na conversao
        while(1){
            int potencia = pow(2,i);
            if(numero/potencia>0){
                i+=1;
            }
            else{
                break;
            }
        }
        //dividindo o numero pela potencia
        for(j=i-1; j>=0; j--){
            int potencia = pow(2,j);
            if(numero/potencia>0){
                printf("1");
                numero = numero - potencia;
            }else{
                printf("0");
            }
        }
    }
}

*/

//Q3

/*
Escreva um programa usando alocação dinâmica de memória para somar duas matrizes, imprimindo na tela o
resultado. Os números de linhas e de colunas que determinam as dimensões das matrizes devem ser
informados via teclado. A forma de preenchimento das matrizes, que devem conter números inteiros, é de sua
escolha, no entanto, não deve ser utilizado somente um algarismo para o preenchimento e as matrizes não
devem ser iguais. (valor da questão: 2,5)
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int linhas, colunas;
    printf("Digite o numero de linhas das matrizes.\n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas das matrizes.\n");
    scanf("%d", &colunas);

    int **mat1 = malloc(linhas*sizeof(int*));
    int **mat2 = malloc(linhas*sizeof(int*));
    int **mat3 = malloc(linhas*sizeof(int*));

    int i, j;
    for(i=0; i<linhas;i++){
        mat1[i] = malloc(colunas*sizeof(int));
        mat2[i] = malloc(colunas*sizeof(int));
        mat3[i] = malloc(colunas*sizeof(int));
    }

    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            mat1[i][j] = 10*i-2*j;
            mat2[i][j] = 5*i+ pow(i,j);
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nMatriz1.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("%d \t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz2.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("%d \t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz1 + Matriz2.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("%d \t", mat3[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<linhas; i++){
        free(mat1[i]);
        free(mat2[i]);
        free(mat3[i]);
    }
    free(mat1);
    free(mat2);
    free(mat3);

}
*/

//Q4

/*
Escreva um programa para encontrar a elegibilidade de admissão para um curso profissional com base nos
seguintes critérios: nota em Matemática >= 6,5, nota em Física >=6,0 e nota em Química >=5,5 e no total nas
três disciplinas a soma deve ser >=19,0 ou o total em Matemática e Física >=14,0. Os valores das notas devem
ser recebidos do teclado e uma mensagem na tela deve fornecer a situação do candidato (aprovado ou
reprovado).
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>

void main(){
    float matematica, fisica, quimica;

    printf("Digite a nota do aluno em matematica. \n");
    scanf("%f", &matematica);

    printf("Digite a nota do aluno em fisica. \n");
    scanf("%f", &fisica);

    printf("Digite a nota do aluno em quimica. \n");
    scanf("%f", &quimica);

    if ((matematica >= 0.0 && matematica <= 10.0) &&
    (fisica >= 0.0 && fisica <= 10.0) &&
    (quimica >= 0.0 && quimica <= 10.0)){
        if(matematica>=6.5){
            if(fisica>=6.0){
                if(quimica>=5.5){
                    if( (matematica+fisica+quimica >=19.0) || (matematica + fisica >= 14.0)){
                        printf("\nAprovado.");
                    }
                    else{
                        printf("\nReprovado, a soma das notas nao alcancaram o esperado.");
                    }
                }
                else{
                    printf("\nReprovado em quimica.");
                }
            }
            else{
                printf("\nReprovado em fisica.");
            }
        }
        else{
            printf("\nReprovado em matematica.");
        }
    }
    else{
        printf("\nAs notas devem estar entre 0 e 10.");
    }

}
