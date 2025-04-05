//Codigos utilizados para resolver as questoes da primeira lista de exercicios

// 2
/*Escrever um programa que aceite a identificação de um empregado, o total de horas
trabalhadas de um mês e a quantia que recebeu por hora. A seguir deve ser impressa
na tela a identificação e o salário do empregado (com duas casas decimais) de um
determinado mês*/

/*
#include<stdio.h>
#include<string.h>
#include<complex.h>
#include<math.h>

void main(){
    char nome;
    int total_horas;
    float valor_hora;

    printf("Digite o nome do empregado\n");
    scanf("%c", &nome);
    printf("Digite o total de horas trabalhadas no mes.\n");
    scanf("%d", &total_horas);
    printf("Digite a quantidade recebida por hora.\n");
    scanf("%f", &valor_hora);

    printf("Empregado: %c \nSalario: %.2f.", nome, total_horas*valor_hora);

}*/

//3

/*
Escrever um programa que aceite três números inteiros e encontre o máximo dentre
os três
*/
/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>

void main(){
    int a,b,c;

    printf("Digite tres numeros para serem comparados.\n");
    scanf("%d %d %d", &a, &b, &c);


    if(a>b){
        if(a>c){
            printf("O maior numero eh: %d", a);
        }
        else{
            printf("O maior numero eh: %d", c);
        }
    }
    else if(b>a){
        if(b>c){
            printf("O maior numero eh: %d", b);
        }
        else{
            printf("O maior numero eh: %d", c);
        }
    }
}
*/

//4

/*
Escrever um programa para calcular a distância entre os dois pontos no espaço 3D
utilizando coordenadas cartesianas.
*/

/*
#include<stdio.h>
#include<string.h>
#include<complex.h>
#include<math.h>

void main(){
    int xa,ya,za,xb,yb,zb;
    printf("Digite as coordenadas x, y e z, respectivamente, do primeiro ponto.\n");
    scanf("%d %d %d", &xa, &ya, &za);
    printf("Digite as coordenadas x, y e z, respectivamente, do segundo ponto.\n");
    scanf("%d %d %d", &xb, &yb, &zb);
    printf("P1 : (%d, %d, %d) \n", xa, ya, za);
    printf("P2 : (%d, %d, %d)", xb, yb, zb);
    printf("\n\nA distancia entre os dois pontos eh: %f", sqrt(pow(xb-xa,2) + pow(yb-ya,2) + pow(zb-za,2)));
}
*/

//5

/*
Escrever um programa que aceita 4 inteiros p, q, r e s do usuário, onde q, r e s são
positivos e p é par. Se q for maior que r e s for maior que p e se a soma de r e s for
maior que a soma de p e q, imprimir Valores certos, caso contrário imprimir Valores
errados
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int p,q,r,s;
    printf("Digite o valor de p (deve ser par)\n");
    scanf("%d", &p);
    printf("Digite o valor de q, r e s, respectivamente (devem ser positivos)\n");
    scanf("%d %d %d", &q, &r, &s);

    if( (q>r) && (s>p) && (r+s > p+q) ){
        printf("Valores certos");
    }
    else{
        printf("Valores errados");
    }

}
*/

//6

/*
Escrever um programa para imprimir raízes usando a fórmula de Bhaskara a partir
de três números em ponto flutuantes indicados como os coeficientes da equação de
segundo grau. Mostrar uma mensagem se não for possível encontrar as raízes.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    float a,b,c;
    float delta;
    printf("Digite os coeficientes a, b e c do sistema.\n");
    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b,2) - 4*a*c;

    if(delta>=0){
        printf("\nR1: %f", (-b + sqrt(delta))/(2*a));
        printf("\nR2: %f", (-b - sqrt(delta))/(2*a));
    }else{
        printf("\nNao foi possivel encontrar as raizes, pois delta e menor que 0 (%f).", delta);
    }


}
*/

//7

/*
Escrever um programa que lê três valores em ponto flutuante do teclado e verifica se
é possível fazer um triângulo com eles. Calcular também o perímetro do triângulo,
se os referidos valores forem válidos.
Para que seja um triangulo: A soma de dois lados de um triângulo sempre deve ser maior que o terceiro lado.

*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int a,b,c;

    printf("Digite os valores dos lados do triangulo. \n");
    scanf("%d %d %d", &a, &b, &c);

    if( (a+b)>c && (b+c)>a && (a+c)>b ){
        printf("\nO perimetro do triangulo eh: %d", a+b+c);
    }
    else{
        printf("\nNao eh possivel formar um triangulo com os valores informados.");
    }
}
*/

//8

/*
Escrever um programa para encontrar e imprimir o quadrado de cada um dos valores
pares de 1 até um valor especificado via teclado
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int limite;

    printf("Digite o valor final para execucao do quadrado dos numeros pares.\n");
    scanf("%d", &limite);

    for(int i=0; i<=limite; i++){
        if(i%2==0){
            printf("\nO quadrado de %d eh: %f", i, pow(i,2));
        }
    }

}
*/


//10

/*
Escrever um programa para testar se duas linhas são paralelas ou não. Os quatro
pontos são a serem considerados são P(x1, y1), Q(x2, y2), R(x3, y3) e S(x4, y4),
para verificar se PQ e
RS são paralelos ou não
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    float m1,m2;

    printf("Digite as coordenadas do primeiro ponto.\n");
    scanf("%d %d", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto.\n");
    scanf("%d %d", &x2, &y2);

    printf("Digite as coordenadas do terceiro ponto.\n");
    scanf("%d %d", &x3, &y3);

    printf("Digite as coordenadas do quarto ponto.\n");
    scanf("%d %d", &x4, &y4);

    printf("P1 : (%d, %d)\nP2 : (%d, %d)\nP3 : (%d, %d)\nP4 : (%d, %d)\n", x1,y1,x2,y2,x3,y3,x4,y4);

    m1 = (y2-y1)/(x2-x1);
    m2 = (y4-y3)/(x4-x3);

    if(m1==m2){
        printf("PQ e RS sao paralelas");
    }
    else{
        printf("PQ e RS nao sao paralelas");
    }
}
*/

//11

/*
Escrever um programa para encontrar os números primos que são inferiores ou iguais
a um determinado número inteiro.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include <stdbool.h>

void main(){
    int limite;
    bool primo;

    printf("Digite o limite para encontrar os numeros primos.\n");
    scanf("%d", &limite);

    for(int i=2; i<=limite; i++){
        primo = true;

        for(int j=2; j<i; j++){
            if(i%j==0){
                primo = false;
                break;
            }
        }
        if(primo==true){
            printf("\n%d", i);
        }
        primo=true;
    }
}
*/

//13

/*
Escrever um programa para converter temperatura em Fahrenheit para Celsius ou de
Celsius para Fahrenheit em função da escolha do usuário via teclado. A temperatura
é recebido do teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    float temperatura, celsius;

    printf("Digite o valor da temperatura em Fahrenheit. \n");
    scanf("%f", &temperatura);
    printf("Fahrenheit: %f \t Celsius: %f", temperatura, ((5.0/9.0)*(temperatura-32.0)));
}
*/

//21

/*
Escrever um programa para receber um ponto no sistema de coordenadas xy e
determinar em que quadrante se situa o ponto
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int x,y;

    printf("Digite as coordenadas do ponto x,y, respectivamente.\n");
    scanf("%d %d", &x, &y);

    if(x>0 && y>0){
        printf("\nO ponto esta no primeiro quadrante.");
    }
    else if(x>0 && y<0){
        printf("\nO ponto esta no quarto quadrante.");
    }
    else if(x<0 && y<0){
        printf("\nO ponto esta no terceiro quadrante.");
    }
    else{
        printf("\nO ponto esta no segundo quadrante.");
    }
}
*/


//22

/*
Escrever um programa para encontrar a elegibilidade de admissão para um curso
profissional com base nos seguintes critérios: nota em Matemática >= 65, nota
em Física >=60 e Notas em Química >=55 e no total nas três disciplinas a soma
deve ser >=190 ou o total em Matemática e Física >=140. Os valores das notas
devem ser recebidos do teclado e uma mensagem na tela deve fornecer a situação
do candidato (aprovado ou reprovado).
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    float matematica, fisica, quimica;

    printf("Digite a nota de matematica.\n");
    scanf("%f", &matematica);

    printf("Digite a nota de fisica.\n");
    scanf("%f", &fisica);

    printf("Digite a nota de quimica.\n");
    scanf("%f", &quimica);

    if(matematica>=65){
        if(fisica>=60){
            if(quimica>=55){
                if( (matematica + quimica + fisica >=190) || (matematica+fisica >=140) ){
                    printf("\nAprovado! Parabens.");
                }
                else{
                   printf("\nReprovado: A soma nao foi suficiente.");
                }
            }
            else{
               printf("\nReprovado: Nao passou em quimica.");
            }
        }
        else{
            printf("\nReprovado: Nao passou em fisica.");
        }
    }
    else{
        printf("\nReprovado: Nao passou em matematica.");
    }
}
*/

//23

/*
Escrever um programa para verificar se um triângulo é equilátero, isósceles ou escaleno.
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int lado1, lado2, lado3;

    printf("Digite os valores dos lados do triangulo.\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if(lado1==lado2 && lado2==lado3){
        printf("\nO triangulo eh equilatero.");
    }
    else if( (lado1==lado2) || (lado2==lado3) || (lado1==lado3)){
        printf("\nO triangulo eh isosceles.");
    }
    else{
        printf("\nO triangulo eh escaleno.");
    }
}
*/

//24

/*
Escrever um programa para receber uma nota em caractere e declarar a descrição
equivalente seguindo a codificação
E Excelente
M Muito Bom
B Bom
N Na média
R Reprovação
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    char nota;

    printf("Digite o caractere referente a nota do aluno.\n");
    scanf("%c", &nota);

    if(nota == 'E'){
        printf("Excelente");
    }
    else if(nota == 'M'){
        printf("Muito bom");
    }
    else if(nota == 'B'){
        printf("Bom");
    }
    else if(nota =='N'){
        printf("Na média");
    }
    else if(nota =='R'){
        printf("Reprovação");
    }
}
*/


//27

/*
 Escrever um programa para imprimir um triângulo retângulo seguindo o padrão
1
2 3
4 5 6
7 8 9 10
sendo o número máximo alcançado recebido via teclado
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int max, i, j;

    printf("Digite o valor maximo para o triangulo retangulo.\n");
    scanf("%d", &max);

    int count = 0;

    for(i=1;i<=max; i++){
        for(j=1; j<=i;j++){
            count +=1;
            printf("%d \t", count);
        }
        if(count==max){
                break;
        }
        printf("\n");
    }
}
*/

//28 *****************

/*
Escrever um programa para encontrar a soma da série 1 − X^2/2! + X^4/4! − ... até
um dado n-ésimo termo.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

int fatorial(int i);

void main(){
    int nTermo,i, x;

    printf("Digite o numero para o n-esimo termo.\n");
    scanf("%d", &nTermo);

    printf("Digite o valor de x.\n");
    scanf("%d", &x);

    float soma = 0;
    for(i=0; i<nTermo; i++){
        if(i%2==0){
            soma+= (pow(x,2.0*i))/ (fatorial(2*i));
        }
        else{
            soma-= (pow(x,2.0*i))/ (fatorial(2*i));
        }
    }
    printf("\nSoma: %f", soma);
}

int fatorial(int i){
    if(i==0 || i==1){
        return 1;
    }
    else{
        return i*fatorial(i-1);
    }

}

*/

//29

/*
Escrever um programa para mostrar os n termos da série harmónica (1 + 1/2 +
1/3 + 1/4 + 1/5 ... 1/n) e a sua soma.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int n,i;

    printf("Digite o n-esimo termo final para a soma.\n");
    scanf("%d", &n);
    float soma =0.0;
    for(i=1; i<=n; i++){
        printf("1/%d = %f\n",i, 1.0/i);
        soma += 1.0/i;
    }
    printf("\nA soma dos termos eh: %f", soma);
}
*/

//30

/*
Escrever um programa para exibir um número em ordem inversa
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int numero;

    printf("Digite o numero para ser impresso na ordem inversa.\n");
    scanf("%d", &numero);

    while((numero/10 !=0)){
        printf("%d", numero%10);
        numero = numero/10;
        if(numero<10){
            printf("%d", numero);
        }

    }
}
*/

//31

/*
 Escrever um programa para verificar se um número é um palíndromo ou não.
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int numero,i;

    printf("Digite o numero para verificar se e palindromo ou nao.\n");
    scanf("%d", &numero);

    //identificando o tamanho do numero
    int contador = 1;
    for(i=10; i<=1000000; i*=10){
        if(numero/i!=0){
            contador+=1;
        }
        else{
            break;
        }
    }

    //salvando o numero invertido em um vetor
    int invertido[contador];
    int j=0;
    while(numero/10!=0){
        invertido[j] = numero%10;
        printf("%d", numero%10);
        numero = numero/10;
        j+=1;
        if(numero<10){
            printf("%d", numero);
            invertido[j] = numero;
        }
    }

    //salvando o numero do terminal em um vetor
    int numeroTerminal[contador];
    int k;
    for(k=0; k<contador; k++){
        numeroTerminal[k] = invertido[contador-k-1];
    }

    //comparando se sao iguais
    int comparador = 0;
    for(k=0; k<contador; k++){
       if(numeroTerminal[k] != invertido[k]){
            comparador += 1;
       }
    }

    if(comparador==0){
        printf("\nO numero em questao eh polindromo.");
    }
    else{
        printf("\nO numero em questao nao eh polindromo.");
    }

}







