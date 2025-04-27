#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>

/*
//utilizando malloc para salvar e imprimir os valores digitados pelo usuario
void main(){
    int n,i;

    printf("Digite a quantidade de numeros que deseja.\n");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n*sizeof(int));

    if(vetor==NULL){
        printf("Erro ao alocar memoria. \n");
    }
    for(i=0; i<n; i++){
        printf("Digite o numero %d:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<n; i++){
        printf("Numero %d: %d\n",i+1, vetor[i]);
    }
    free(vetor);
}
*/

//imprimindo n valores com calloc
/*
void main(){
    int n,i;

    printf("Digite o numero de elementos do vetor.\n");
    scanf("%d", &n);

    int *vetor = (int *)calloc(n, sizeof(int));

    if(vetor==NULL){
        printf("Erro ao alocar memoria. \n");
    }
    //imprimindo todos como sendo 0
    for(i=0; i<n; i++){
        printf("\n Numero %d: %d", i+1, vetor[i]);
    }

    for(i=0; i<n; i++){
        printf("\nDigite o valor do numero %d.\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<n; i++){
        printf("\nNumero %d: %d", i+1, vetor[i]);
    }
    free(vetor);
}
*/

/*
//ajustando tamanho do vetor
void main(){
    int n, m, i;

    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &n);

    int *vetor = (int *)calloc(n, sizeof(int));

    for(i=0; i<n; i++){
        printf("\n Numero %d: %d", i+1, vetor[i]);
    }

    printf("\nDigite o novo valor do vetor.\n");
    scanf("%d", &m);
    if(m<=n){
        printf("\nO novo valor do vetor deve ser maior que o antigo.\n");
    }

    int *vetor_novo = (int *)realloc(vetor, m*sizeof(int));

    printf("\nNovo vetor.");
    for(i=n+1; i<=m; i++){
        printf("\nDigite o numero %d.\n", i);
        scanf("%d", &vetor_novo[i-1]);
    }
    for(i=0; i<m; i++){
        printf("\nNumero %d: %d", i+1, vetor_novo[i]);
    }
    free(vetor);
    free(vetor_novo);
}
*/

/*
Exercício 4 – Média de notas com realloc (número indefinido)
Objetivo: O usuário pode inserir quantas notas quiser. Digitar -1 encerra a entrada.

Requisitos:
Vá realocando o vetor a cada nova nota.

Quando digitar -1, calcule e mostre a média.

📌 Dica: Comece com vetor NULL, e vá aumentando com realloc.
*/

/*
void main(){
    int n,i;

    int *vetor = NULL;
    float soma=0.0;
    float media = 0.0;

    for(i=1; i<=1000000; i++){
        //a cada nota digitada ele aumenta o tamanho do vetor dinamico
        int *vetor_notas = (int *)realloc(vetor, (i)*sizeof(int));
        //verifica se tem espaco para colocar todos os dados na parte da memoria que esta sendo utilizada, caso n, leva os dados para outro endereco que caiba tudo
        if (vetor_notas == NULL) {
            //so vai imprimir isso aqui caso n tenha nenhum espaço na memoria em nenhum lugar
            printf("Erro de alocação.\n");
            //libera o endereco de memoria para procurar outro
            free(vetor);
        }
        //faz com que os dois apontem para o mesmo endereco
        //sempre que usar realloc igualar os dois por boas praticas
        vetor = vetor_notas;
        printf("Digite o valor da nota %d: ", i);
        scanf("%d", &vetor[i - 1]);
        //caso usuario digite -1
        if(vetor[i-1] == -1){
            //caso o vetor n tenha nenhuma nota (i comeca de um no laco for)
            if (i == 1) {
                printf("Nenhuma nota válida inserida.\n");
                //libera o espaco
                free(vetor);
            }
            media = soma / (i - 1);
            break;
        }
        else{
            soma += vetor[i - 1];
        }
        printf("\nNota %d: %d", i, vetor[i-1]);
        printf("\nSoma: %f\n", soma);
    }
    printf("\nMedia: %.2f\n", media);
    free(vetor);
}

*/

void main(){
    int n,i;

    int *vetor = NULL;
    float soma=0.0;
    float media = 0.0;

    for(i=0; i<=1000000; i++){
        int *vetor_notas = (int *)realloc(vetor, (i+1)*sizeof(int));
        printf("Digite o valor da nota %d.\n", i+1);
        if(vetor_notas == NULL){
            printf("Erro alocacao de memoria.\n");
            free(vetor);
            return;
        }
        vetor = vetor_notas;
        scanf("%d", &vetor_notas[i]);
        if(vetor_notas[i] == -1){
            if(i==0){
                printf("Nenhuma nota foi digitada.\n");
                free(vetor);
                break;
            }
            media = soma/(i);
            break;
        }
        else{
            soma += vetor_notas[i];
        }
        printf("\nNota %d: %d", i, vetor_notas[i]);
        printf("\nSoma: %f\n", soma);
    }
    printf("\nMedia: %f", media);
}
