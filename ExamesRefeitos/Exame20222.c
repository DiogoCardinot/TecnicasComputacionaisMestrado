//Q1

/*
Crie uma função chamada func_ordenar que receba três parâmetros: um vetor de inteiros, o tamanho do vetor e uma variável booleana chamada maior. Se a variável maior for verdadeira, a função
deve ordenar o vetor em ordem crescente; caso contrário, deve ordená-lo em ordem decrescente.

Para testar essa função, escreva um programa que realize as seguintes etapas:

a) Crie dois vetores de inteiros aleatórios, com valores positivos e menores que 100. O vetor V1 deve ter 20 elementos e o vetor V2 deve ter 30 elementos.

b) Imprima os vetores V1 e V2 na tela.

c) Utilize a função func_ordenar para imprimir o vetor V1 em ordem decrescente.

d) Utilize a função func_ordenar para imprimir o vetor V2 em ordem crescente.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void func_ordenar(int vet[], int tamanho_vetor, bool maior);

void main(){
   int tamanho_vetor1;
   int tamanho_vetor2;
   int i;

   bool maior = true;
   printf("Digite o tamanho do primeiro vetor: \n");
   scanf("%d", &tamanho_vetor1);

   printf("Digite o tamanho do segundo vetor: \n");
   scanf("%d", &tamanho_vetor2);

   int vetor1[tamanho_vetor1];
   int vetor2[tamanho_vetor2];

   for(i=0; i<tamanho_vetor1; i++){
        vetor1[i] = i*2;
   }

   for(i=0; i<tamanho_vetor2; i++){
        vetor2[i] = i+5;
   }
    printf("\nVetor1:\n");
   for(i=0; i<tamanho_vetor1; i++){
        printf("%d \n", vetor1[i]);
   }
    printf("\nVetor2:\n");
   for(i=0; i<tamanho_vetor2; i++){
        printf("%d \n", vetor2[i]);
   }

   func_ordenar(vetor1, tamanho_vetor1, maior);
   func_ordenar(vetor2, tamanho_vetor2, !maior);

    printf("\nVetor ordenado:\n");
   for(i=0; i<tamanho_vetor1; i++){
        printf("%d \n", vetor1[i]);
   }
    printf("\nVetor 2 ordenado:\n");
   for(i=0; i<tamanho_vetor2; i++){
        printf("%d \n", vetor2[i]);
   }

}

void func_ordenar(int vet[], int tamanho_vetor, bool maior){
    int i,j,aux;
    if(maior){
        for(i=0; i<tamanho_vetor-1; i++){
            for(j=0; j<tamanho_vetor-i-1; j++){
                if(vet[j]>vet[j+1]){
                    aux = vet[j+1];
                    vet[j+1] = vet[j];
                    vet[j] = aux;
                }
            }
        }
    }
    else{
       for(i=0; i<tamanho_vetor-1; i++){
            for(j=0; j<tamanho_vetor-i-1; j++){
                if(vet[j]<vet[j+1]){
                    aux = vet[j+1];
                    vet[j+1] = vet[j];
                    vet[j] = aux;
                }
            }
        }
    }
}

*/

//Q2

/*
Calcule e exiba na tela a sequência de Fibonacci para um número inteiro não negativo informado pelo usuário. Além disso, informe quantos números pares aparecem na sequência.
A série de Fibonacci começa com F0 = 0 e F1 = 1, e cada número subsequente é a soma dos dois números anteriores (Fn = Fn-1 + Fn-2). Por exemplo, se o usuário informar o número 9,
a sequência será: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. Neste caso, há 4 números pares.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

int fibonacci(int numero);

void main(){
    int numero;
    int resultado,i;
    int soma =0;
    printf("Digite o numero para calculo da sequencia de Fibonacci.\n");
    scanf("%d", &numero);

    for(i=0; i<=numero; i++){
        if(i==numero){
            printf("%d", fibonacci(i));
            if(fibonacci(i)%2==0){
                soma+=1;
            }
        }else{
            printf("%d + ", fibonacci(i));
            if(fibonacci(i)%2==0){
                soma+=1;
            }
        }
    }
    printf("\nResultado da sequencia de fibonacci: %d", fibonacci(numero));
    printf("\nQuantidade de numeros pares: %d", soma);

}

int fibonacci(int numero){
    if(numero ==0){
        return 0;
    }else if(numero==1){
        return 1;
    }
    else{
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }
}
*/

//Q3

/*
 Escreva uma função, denominada exerc1, que recebe um número inteiro positivo
como argumento e retorna 1 se todos os dígitos do número forem pares e iguais. Caso contrário,
a função retorna 0. Por exemplo:

exerc1(222) retorna 1
exerc1(8) retorna 1
exerc1(333) retorna 0
exerc1(244) retorna 0.
*/
/*

void main(){
    int numero;

    printf("Digite o numero.\n");
    scanf("%d", &numero);
    int novo_numero = numero;

    int tam_vetor=0;
    int i;

    while(numero>0){
        tam_vetor+=1;
        numero=numero/10;

    }

    int vet[tam_vetor];
    printf("\nTam: %d\n", tam_vetor);

    for(i=0; i<tam_vetor; i++){
        vet[tam_vetor-1-i] = novo_numero%10;
        novo_numero=novo_numero/10;
    }

    for(i=0; i<tam_vetor; i++){
        printf("%d \t", vet[i]);
    }
    int iguais=0;
    int pares=0;
    for(i=0; i<tam_vetor-1; i++){
        if(vet[i]!=vet[i+1]){
            iguais +=1;
        }

    }
    for(i=0; i<tam_vetor; i++){
        if(vet[i]%2!=0){
            pares +=1;
        }

    }
    printf("\n");
    if(pares>0 || iguais>0){
       printf("0");
    }
    else{
        printf("1");
    }
}*/

//Q4

/*
Escreva uma função que receba um vetor de 5 elementos inteiros e positivos, e
retorne o mínimo múltiplo comum entre o maior e menor número do vetor. Caso o vetor de
entrada possuir algum elemento negativo, a função deve retornar -1. Exemplo, para o vetor v
seguinte, a função deve retornar 60:
v = [15 30 29 12 18 ]
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int tamanhoVetor = 5;
    int i,j;
    int vetor[] = {15,30,29,12,18};
    int maior =0;
    int menor = 1000000;
    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]<0){
            printf("-1");
            return;
        }
    }
    //Pegar o maior numero
    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]>maior){
            maior = vetor[i];
        }
    }
    //Pegar o menor numero
    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]<menor){
            menor = vetor[i];
        }
    }

    //Pegando os numeros primos
    int primo;
    int tamanho_primos = 0;
    for(i=2; i<=maior;i++){
        primo = 0;
        for(j=2; j<i; j++){
            if(i%j==0 && i!=2){
                primo+=1;
            }
        }
        if(primo==0){
            tamanho_primos+=1;
        }
    }
    //Salvando os primos em um vetor
    int primos[tamanho_primos];
    int d=0;
    for(i=2; i<=maior;i++){
        primo = 0;
        for(j=2; j<i; j++){
            if(i%j==0 && i!=2){
                primo+=1;
            }
        }
        if(primo==0){
            primos[d] = i;
            d++;
        }
    }

    for(i=0; i<tamanho_primos;i++){
        printf("%d\n", primos[i]);

    }
    //Encontrando o MMC

    //corrigir aqui, ele precisa atualizar e testar os primos novamente
    int mmc=1;
    int k = 0;
    while(menor!=1 || maior!=1){
        if(maior%primos[k]==0 && menor%primos[k]==0){
            mmc*= primos[k];
            maior = maior/primos[k];
            menor = menor/primos[k];
            k=0;
        }else if(maior%primos[k] == 0){
            mmc*=primos[k];
            maior = maior/primos[k];
            k=0;
        }else if(menor%primos[k]==0){
            mmc*= primos[k];
            menor = menor/primos[k];
            k=0;
        }else{
            k++;
        }

    }

    printf("\nMMC: %d", mmc);


}

