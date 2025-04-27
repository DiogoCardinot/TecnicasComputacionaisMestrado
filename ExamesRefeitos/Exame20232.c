//Diogo Alves Cardinot


//Q1

/*
Escreva uma função chamada exerc1 que aceita um número inteiro positivo como argumento. A função tem dois possíveis retornos: se todos os dígitos forem ímpares, a função deve retornar o produto
entre esses dígitos; se, no máximo, um dos dígitos for ímpar, a função deve retornar a soma entre todos os dígitos do número.

Considere os exemplos abaixo:
• Número: 13579; todos os dígitos (1, 3, 5, 7, 9) são ímpares, então o resultado deve ser o produto desses dígitos: 1 × 3 × 5 × 7 × 9 = 945.
• Número: 22344; apenas o dígito 3 é ímpar, então o resultado deve ser a soma dos dígitos deste número: 2 + 2 + 3 + 4 + 4 = 15.

*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int numero;

    printf("Digite um numero inteiro.\n");
    scanf("%d", &numero);

    //Verificando se o inteiro é positivo
    if(numero<0){
        printf("\nO numero precisa ser positivo.\n");
    }
    else{
        int i=0;
        //PEGANDO O TAMANHO DO NUMERO
        int novo_numero = numero;
        while(novo_numero > 0){
                i+=1;
                novo_numero = novo_numero/10;
        }
        printf("\ni: %d", i);
        //SALVAR O NUMERO DIGITADO EM UM VETOR
        int j;
        int vetor_numero_invertido[i];
        int vetor_numero[i];
        for(j=0; j<i; j++){
            vetor_numero_invertido[j] = numero%10;
            numero = numero/10;
        }

        printf("\nNumero Invertido:\n");
        for(j=0; j<i; j++){
            printf("%d \t", vetor_numero_invertido[j]);
        }

        for(j=0; j<i; j++){
            vetor_numero[j] = vetor_numero_invertido[i-j-1];
        }

        printf("\nNumero Ordenado:\n");
        for(j=0; j<i; j++){
            printf("%d \t", vetor_numero[j]);
        }

        //Verificando se sao todos impares ou se tem par no meio
        int resultado;
        int impar = 0;
        for(j=0; j<i; j++){
            if(vetor_numero[j]%2!=0){
                impar +=1;
            }
        }
        if(impar==i){
            resultado =1;
            for(j=0; j<i; j++){
                resultado *= vetor_numero[j];
            }
        }else if(impar<=1){
            resultado = 0;
            for(j=0; j<i; j++){
                resultado += vetor_numero[j];
            }
        }
        printf("\nO resultado final eh: %d", resultado);
    }
}
*/

//Q2

/*
Considere um vetor p de números inteiros, contendo n ≥ 4 elementos. Cada elemento do vetor será representado por aᵢ, onde i varia de 0 até n − 1.

Construa um novo vetor q seguindo as seguintes regras:

Para cada tripla de valores consecutivos aᵢ, aᵢ₊₁, aᵢ₊₂ em p, se o valor central aᵢ₊₁ for par, o i-ésimo elemento de q deve ser o produto dos três valores: aᵢ × aᵢ₊₁ × aᵢ₊₂.

Se o valor central aᵢ₊₁ for ímpar, o i-ésimo elemento de q deve ser a soma dos três valores: aᵢ + aᵢ₊₁ + aᵢ₊₂.

Utilize o exemplo a seguir para entender a aplicação das regras. Dado p = [3, 5, 4, 6, 5, 3, 4, 3, 8]:

Na primeira iteração, os valores considerados de p serão 3, 5, 4. Como 5 (o valor central desta tripla) é ímpar, a primeira posição do novo vetor q será preenchida com 3 + 5 + 4 = 12. Ao final desta iteração, temos q = [12, , , , , , ].

Na segunda iteração, os valores considerados de p serão 5, 4, 6. Como 4 (o valor central desta tripla) é par, a segunda posição do novo vetor q será preenchida com 5 × 4 × 6 = 120. Ao final desta iteração, temos q = [12, 120, , , , , ].

E assim por diante.

Crie um programa que, dados p e n, imprima os valores de q ao final das iterações.
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int tamanho_vetor;

    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanho_vetor);
    int p[tamanho_vetor];
    int q[tamanho_vetor-2];
    int i;

    for(i=0; i<tamanho_vetor; i++){
        printf("\nValor %d: ", i+1);
        scanf("%d", &p[i]);
    }

    int j=0;
    for(i=0; i<tamanho_vetor-2; i++){
        printf("%d \t", p[i]);
        if(p[i+1]%2==0){
            q[j]= p[i]*p[i+1]*p[i+2];
            j++;
        }else{
            q[j]= p[i]+p[i+1]+p[i+2];
            j++;
        }
    }
    printf("\n");
    for(i=0; i<tamanho_vetor-2; i++){
        printf("%d \t", q[i]);
    }

}

*/

//Q3

/*
A busca binária é um algoritmo utilizado para encontrar um elemento (chave) em um vetor ordenado v, com n elementos, cuja estratégia básica consiste em dividir repetidamente
o vetor pela metade. Inicialmente, a busca compara o elemento-alvo com o valor no meio do vetor. Se houver uma correspondência, a busca é concluída.
Caso contrário, ela determina se o elemento-alvo está à esquerda ou à direita do meio e repete a busca na metade relevante do vetor.

Suponha que se tenha um vetor ordenado de números inteiros:
v = [2, 4, 6, 8, 10, 12, 14, 16, 18]

O exemplo abaixo ilustra o procedimento, com o objetivo de encontrar a chave 14:

Primeira iteração:
• Meio do vetor: 10 (índice 4)
• 14 > 10, então restringimos a busca à metade superior do vetor.

Segunda iteração:
• Meio do vetor: 16 (índice 7)
• 14 < 16, então restringimos a busca à metade inferior do vetor.

Terceira iteração:
• Meio do vetor: 14 (índice 6)
• Elemento 14 encontrado no índice 6.

Implemente o programa buscaBinaria(int[] v, int n, int chave) para realizar esse procedimento em um vetor ordenado, retornando a posição do elemento ou -1 se o elemento não estiver presente.

No programa principal, declare um vetor ordenado de n números inteiros v, permita que o usuário insira um elemento a ser procurado e exiba se o elemento foi encontrado,
juntamente com a posição no vetor, se aplicável.
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int tamanho_vetor;

    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanho_vetor);

    int vetor[tamanho_vetor];
    int i;
    for(i=0; i<tamanho_vetor; i++){
        printf("\nDigite o elemento %d:", i+1);
        scanf("%d", &vetor[i]);
    }
    int elemento_desejado;
    printf("\nQual elemento desejado para busca?\n");
    scanf("%d", &elemento_desejado);

    int inicio=0;
    int fim = tamanho_vetor-1;
    int flag=0;
    while(inicio<=fim){
        int meio = (inicio+fim)/2;
        if(vetor[meio]==elemento_desejado){
            printf("\nO elemento se encontra na posicao: %d", meio+1);
            flag=1;
            break;
        }else if(vetor[meio]<elemento_desejado){
            inicio = meio+1;
        }else if(vetor[meio]>elemento_desejado){
            fim = meio-1;
        }

    }
     if(flag==0){
        printf("-1");
    }

}

