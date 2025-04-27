//Diogo Alves Cardinot

//Q2

/*
Calcular desvio padrao de um conjunto de dados
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int tamanhoDados;

    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanhoDados);

    int vetor[tamanhoDados];

    int i;
    int soma_dados=0;
    float media_dados;
    for(i=0; i<tamanhoDados; i++){
        printf("\nDado %d:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<tamanhoDados; i++){
        soma_dados+=vetor[i];
    }
    media_dados = soma_dados/tamanhoDados;
    float aux=0;
    for(i=0; i<tamanhoDados; i++){
        aux += pow((vetor[i] - media_dados),2.0);
    }

    float desvioPadrao;
    desvioPadrao = sqrt(aux/tamanhoDados);
    printf("\nDesvio padrao: %f", desvioPadrao);

}
*/

//Q3

/*
Voce recebe um ˆ array de pontuac¸oes. Os n ˜ umeros em ´ ´ındices pares representam suas pontuac¸oes ˜
em cada turno. Os numeros em ´ ´ındices ´ımpares representam as pontuac¸oes do seu oponente. Crie ˜
uma func¸ao˜ quemEstaGanhando que converta essa lista de pontuac¸oes em um ˜ array que indica
quem esta vencendo em cada momento. Para ilustrar (Voc ´ e - Y, Oponente - O, Empate - T):
*/

/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>

void main(){
    int tamanhoPontuacao;

    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanhoPontuacao);

    int pontuacao[tamanhoPontuacao];
    int k;
    for(k=0; k<tamanhoPontuacao;k++){
        printf("\nDigite a pontuacao %d:", k+1);
        scanf("%d", &pontuacao[k]);
    }

    if(tamanhoPontuacao%2==0){
       int pontuacao_cumulativa_y[tamanhoPontuacao/2];
       int pontuacao_cumulativa_o[tamanhoPontuacao/2];

       int aux_y=0;
       int aux_o=0;
       int i;
       int j=0;

       for(i=0;i<tamanhoPontuacao-1; i+=2){
            aux_y+= pontuacao[i];
            pontuacao_cumulativa_y[j] = aux_y;
            j++;
       }

       int d=0;
       for(i=1;i<tamanhoPontuacao; i+=2){
            aux_o+= pontuacao[i];
            pontuacao_cumulativa_o[d] = aux_o;
            d++;
       }

       for(i=0; i<tamanhoPontuacao/2; i++){
        printf("%d \t", pontuacao_cumulativa_y[i]);
       }
        printf("\nPontuacao cumulativa.\n");
       for(i=0; i<tamanhoPontuacao/2; i++){
        printf("%d \t", pontuacao_cumulativa_o[i]);
       }

       char resultado[tamanhoPontuacao/2];
       for(i=0; i<tamanhoPontuacao/2; i++){
            if(pontuacao_cumulativa_o[i]>pontuacao_cumulativa_y[i]){
                resultado[i] ='O';
            }else if(pontuacao_cumulativa_o[i]<pontuacao_cumulativa_y[i]){
                resultado[i] ='Y';
            }else{
                resultado[i] ='T';
            }
       }

       printf("\n[");
       for(i=0; i<tamanhoPontuacao/2; i++){
            if(i==tamanhoPontuacao/2-1){
                 printf("%c", resultado[i]);
            }else{
                printf("%c ,", resultado[i]);

            }
       }
       printf("]");
    }else{

        printf("O conjunto de pontuacoes deve ter uma quantidade par de pontuacoes.\n");
    }
}
*/


//Q4

/*
Escreva uma função linhaIdenticaColuna que retorne verdadeiro se existir uma linha que seja
identica a uma coluna em uma matriz bidimensional; caso contrário, retorne falso.

*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>
#include<complex.h>



void main(){
    int linhas = 4;
    int colunas = 4;
    int mat[linhas][colunas];


    // Inicializando a 3 matriz
    mat[0][0] = 4; mat[0][1] = 4; mat[0][2] = 9; mat[0][3] = 4;
    mat[1][0] = 2; mat[1][1] = 1; mat[1][2] = 9; mat[1][3] = 8;
    mat[2][0] = 5; mat[2][1] = 4; mat[2][2] = 7; mat[2][3] = 7;
    mat[3][0] = 6; mat[3][1] = 4; mat[3][2] = 1; mat[3][3] = 0;


    // Inicializando a matriz
    mat[0][0] = 1; mat[0][1] = 2; mat[0][2] = 3; mat[0][3] = 4;
    mat[1][0] = 2; mat[1][1] = 4; mat[1][2] = 9; mat[1][3] = 8;
    mat[2][0] = 5; mat[2][1] = 9; mat[2][2] = 7; mat[2][3] = 7;
    mat[3][0] = 6; mat[3][1] = 8; mat[3][2] = 1; mat[3][3] = 0;

    int i, j,k;
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("%d \t", mat[i][j]);
        }
        printf("\n");
    }

    bool igual = true;
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            igual = true;
            for(k=0;k<linhas;k++){
                if(mat[i][k] != mat[k][j]){
                    igual = false;
                    break;
                }
            }
            if(igual) {
                printf("true.\n");
                printf("Linha %d e coluna %d.\n", i+1, j+1);
                return;
            }
        }
    }
    printf("false\n");
}

*/

//Q1

/*
Crie uma func¸ao˜ retanguloNoCirculo que receba tres n ˆ umeros como entrada: a largura e a ´
altura de um retangulo, e o raio de um c ˆ ´ırculo. A func¸ao deve retornar ˜ true se o retangulo puder ˆ
caber inteiramente dentro do c´ırculo, e false caso contrario. ´
Exemplos:
retanguloNoCirculo(8, 6, 5) # -> true
retanguloNoCirculo(5, 9, 5) # -> false
retanguloNoCirculo(4, 7, 4) # -> false
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>
#include<stdbool.h>

void main(){
    int largura, altura, raio;

    printf("Digite a largura do retangulo.\n");
    scanf("%d", &largura);

    printf("Digite a altura do retangulo.\n");
    scanf("%d", &altura);

    printf("Digite o raio da circunferencia.\n");
    scanf("%d", &raio);

    if( sqrt( pow(largura,2.0)+ pow(altura,2.0)) <= 2*raio){
        printf("true");
    }
    else{
        printf("false");
    }
}
