//Codigo para calcular o valor de uma integral numerica

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    float intervalo_esquerda, intervalo_direita, deltaX, a, b,c;
    float pontosDominio;

    printf("Digite os coeficientes da equacao de segundo grau:\n");
    printf("Formato: a*x^2 + b*x + c.\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    FILE *dados_entrada;
    dados_entrada = fopen("integracaoTrapezioDados.txt", "rt");
    char texto[50];

    fscanf(dados_entrada, "%s %f", texto, &intervalo_esquerda);
    fscanf(dados_entrada, "%s %f", texto, &intervalo_direita);
    fscanf(dados_entrada, "%s %f", texto, &pontosDominio);

    deltaX = (intervalo_direita-intervalo_esquerda)/pontosDominio;

    float i;
    float somatorio=0;
    float func, dFunc;
    for(i=intervalo_esquerda; i<intervalo_direita; i=i+deltaX){
        func = a*pow((i+(deltaX)/2),2.0) + b*(i+(deltaX)/2) + c;
        dFunc = deltaX*func;
        somatorio += dFunc;
    }
    printf("\nResultado da integral pelo metodo do trapezio:\n");
    printf("%f", somatorio);
    fclose(dados_entrada);
}
