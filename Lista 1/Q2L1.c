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
/*
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
*/

//9

/*
Escrever um programa que imprimi na tela a soma dos valores de cada coluna e de
cada linha de uma dada tabela. Com leitura
do número de linhas, de colunas e dos valores da tabela via teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int linhas, colunas, i,j;


    printf("Digite o numero de linhas da tabela.\n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da tabela.\n");
    scanf("%d", &colunas);

    float tabela[linhas][colunas];

    printf("Digite o valor para:\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d \t Coluna: %d\n", i+1, j+1);
            scanf("%f", &tabela[i][j]);
        }
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", tabela[i][j]);
        }
        printf("\n");
    }

    float somaLinha, somaColuna;
    //Soma das linhas
    for(i=0; i<linhas; i++){
        somaLinha = 0.0;
        for(j=0; j<colunas; j++){
            somaLinha += tabela[i][j];
        }
        printf("\nSoma linha %d: %f",i+1, somaLinha );
    }
    printf("------------------------------------------");
    //Soma das colunas
    for(j=0; j<colunas; j++){
        somaColuna = 0.0;
        for(i=0; i<linhas; i++){
            somaColuna += tabela[i][j];
        }
        printf("\nSoma coluna %d: %f",j+1, somaColuna );
    }


}
*/

//12

/*
Escrever um programa, que lê n notas de
uma disciplina (0,0-10,0) de um estudante e calcular a média dessas notas.
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int n,i;

    printf("Digite o numero de notas dessa disciplina.\n");
    scanf("%d", &n);
    float notas[n];

    for(i=0; i<n; i++){
        printf("Digite o valor da nota %d:\n", i+1);
        scanf("%f", &notas[i]);
    }

    float somaNotas = 0.0;

    printf("\nVetor de notas:\n");
    for(i=0; i<n; i++){
        printf("Nota %d: %f\n", i+1, notas[i]);

    }

    for(i=0; i<n; i++){
        somaNotas += notas[i];

    }
    printf("\nMedia: %f", somaNotas/n);

}
*/

//15

/*
Escrever um programa para criar um vetor
a partir de um vetor de números inteiros, deslocando todos os números pares para
antes de todos os números ímpares.
*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int tamanhoVetor;

    printf("Digite a quantidade de numeros desejados para o vetor.\n");
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];
    int i;
    int j=0;
    int vetorArr[tamanhoVetor];

    for(i=0; i<tamanhoVetor; i++){
        printf("\nDigite o numero %d:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]%2 ==0){
            vetorArr[j] = vetor[i];
            j+=1;
        }
    }
    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]%2 !=0){
            vetorArr[j] = vetor[i];
            j+=1;
        }
    }
    printf("\nVetor final arrumado.\n");
    for(i=0; i<tamanhoVetor; i++){
        printf("%d", vetorArr[i]);
    }

}
*/

//16

/*
Escrever um programa usando para criar um novo vetor depois
de substituir todos os valores 7 em um vetor dado por 0, deslocando todos os zeros
para o começo do vetor.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){

    int tamanhoVetor ;
    printf("Digite o tamanho do vetor. \n");
    scanf("%d", &tamanhoVetor);

    int vetorOriginal[tamanhoVetor];
    int vetorArrumado[tamanhoVetor];
    int i;
    int j=0;

    for(i=0; i<tamanhoVetor; i++){
        printf("\nDigite o numero %d:\n", i+1);
        scanf("%d", &vetorOriginal[i]);
    }

    for(i=0; i<tamanhoVetor; i++){
        if(vetorOriginal[i] == 7){
            vetorOriginal[i] = 0;
        }
    }

    for(i=0; i<tamanhoVetor; i++){
        if(vetorOriginal[i] == 0){
            vetorArrumado[j] = vetorOriginal[i];
            j+=1;
        }
    }

    for(i=0; i<tamanhoVetor; i++){
        if(vetorOriginal[i] != 0){
            vetorArrumado[j] = vetorOriginal[i];
            j+=1;
        }
    }

    for(i=0; i<tamanhoVetor; i++){
        printf("\n%d", vetorArrumado[i]);
    }
}
*/

//17

/*
Escrever um programa para verificar se um dado conjunto
de números inteiros contém 3 ou 5
*/
/*
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include <stdbool.h>

void main(){
    int tamanhoVetor;
    printf("Digite o tamanho do conjunto de numeros.\n");
    scanf("%d", &tamanhoVetor);
    int vetor[tamanhoVetor];
    int i;
    for(i=0; i<tamanhoVetor; i++){
        printf("Digite o numero %d do conjunto:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    bool numero3;
    bool numero5;

    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]==3){
            numero3 = true;
        }
        if(vetor[i]==5){
            numero5 =true;
        }
    }
    if(numero3==true && numero5==true){
        printf("\nO conjunto de dados possui o numero 3 e o numero 5.\n");
    }
    else if(numero3==true){
        printf("\nO conjunto de dados possui o numero 3.\n");
    }
    else if(numero5==true){
        printf("\nO conjunto de dados possui o numero 5.\n");
    }
    else{
        printf("\nO conjunto de dados nao possui o numero 3 nem o numero 5.\n");
    }

}
*/

//18

/*
Escrever um programa para verificar se a soma de todos
os valores ímpares em um vetor levam exatamente a 32
*/

/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
#include<stdlib.h>
#include<stdbool.h>

void main(){
    int tamanhoVetor,i;
    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];

    for(i=0; i<tamanhoVetor; i++){
        printf("\nDigite o numero %d do conjunto de numeros.\n", i+1);
        scanf("%d", &vetor[i]);
    }

    int soma=0;
    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]%2!=0){
            soma += vetor[i];
        }
    }

    if(soma==32){
        printf("O resultado da soma eh 32.");
    }
    else{
        printf("O resultado da soma eh: %d", soma);
    }

}
*/

//19

/*
Escrever um programa para calcular a soma dos números de uma determinada matriz. Número de colunas, linhas e valores devem ser
fornecidos via teclado.

*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    int linhas, colunas, i,j;

    printf("Digite o numero de linhas da matriz.\n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz.\n");
    scanf("%d", &colunas);

    float matriz[linhas][colunas];

    for(i=0; i<linhas; i++){
        for(j=0;j<colunas; j++){
            printf("\nLinha: %d \t Coluna: %d\n", i+1,j+1);
            scanf("%f", &matriz[i][j]);
        }
    }

    for(i=0; i<linhas; i++){
        for(j=0;j<colunas; j++){
            printf("%f \t", matriz[i][j]);
        }
        printf("\n");
    }

    float soma=0.0;
    for(i=0; i<linhas; i++){
        for(j=0;j<colunas; j++){
            soma+=matriz[i][j];
        }
    }

    printf("\nA soma eh: %f", soma);

}
*/

//20

/*
Escrever um programa para ordenar os elementos de um
vetor.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int tamanhoVetor ;
    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &tamanhoVetor);

    int vetor[tamanhoVetor];

    int i,j;
    int aux;

    for(i=0; i<tamanhoVetor; i++){
        printf("\nDigite o numero %d\n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < tamanhoVetor -1; i++){
       for(j = 0; j < tamanhoVetor -1 - i; j++){
            if(vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    for(i=0; i<tamanhoVetor; i++){
        printf("\n%d", vetor[i]);
    }
}
*/

//25

/*
Escrever um programa que recebe número de linhas e
número de colunas de uma matriz via teclado e por uma alguma regra preenche a
matriz com valores não nulos variáveis e a imprime na tela.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas da matriz. \n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz. \n");
    scanf("%d", &colunas);

    float mat[linhas][colunas];

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            mat[i][j] = pow(i,j) * sin(i) + cos(j);
        }
    }
    printf("\nMatriz\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", mat[i][j]);
        }
        printf("\n");
    }

}
*/

//26

/*
Escrever um programa para somar duas matrizes, imprimindo na tela o resultado (número de linhas, de colunas e valores nas matrizes vem
do teclado).
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas das duas matrizes.\n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas das duas matrizes.\n");
    scanf("%d", &colunas);

    float mat1[linhas][colunas];
    float mat2[linhas][colunas];
    float mat3[linhas][colunas];

    for(i=0; i<linhas;i++){
        for(j=0; j<colunas;j++){
            mat1[i][j] = pow(j,i)* cos(j);
            mat2[i][j] = pow(i,j)* sin(i);
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nMatriz 1.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas;j++){
            printf("%f \t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas;j++){
            printf("%f \t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 1 + Matriz 2.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas;j++){
            printf("%f \t", mat3[i][j]);
        }
        printf("\n");
    }
}
*/

//32

/*
Escrever um programa para realizar a multiplicação
de duas matrizes. Números de linhas, colunas e valores nas matrizes devem ser
recebidos do teclado.

*/
/*

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
#include<stdlib.h>

void main(){
    int linhas1, linhas2, colunas1, colunas2, i, j;

    printf("Digite o numero de linhas da primeira matriz.\n");
    scanf("%d", &linhas1);

    printf("Digite o numero de colunas da primeira matriz.\n");
    scanf("%d", &colunas1);

    printf("Digite o numero de linhas da segunda matriz.\n");
    scanf("%d", &linhas2);

    printf("Digite o numero de colunas da segunda matriz.\n");
    scanf("%d", &colunas2);

    if(colunas1!=linhas2){
        printf("\nA multiplicacao nao pode ser realizada pois o numero de colunas da primeira matriz e diferente do numero de linhas da segunda matriz.\n");
        return;
    }
    else{
        float mat1[linhas1][colunas1];
        float mat2[linhas2][colunas2];
        float res[linhas1][colunas2];

        //PRIMEIRA MATRIZ
        printf("Preencha a primeira matriz.\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){
                printf("\nLinha: %d\t Coluna: %d\n", i+1,j+1);
                scanf("%f", &mat1[i][j]);
            }
        }
        printf("\nMatriz 1.\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){
                printf("%f\t", mat1[i][j]);
            }
            printf("\n");
        }

        //SEGUNDA MATRIZ
        printf("Preencha a segunda matriz.\n");
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){
                printf("\nLinha: %d\t Coluna: %d\n", i+1,j+1);
                scanf("%f", &mat2[i][j]);
            }
        }
        printf("\nMatriz 2.\n");
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){
                printf("%f\t", mat2[i][j]);
            }
            printf("\n");
        }

        //MULTIPLICACAO DAS MATRIZES
        int k;
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                float soma = 0.0;
                for(k=0; k<colunas1; k++){
                     soma += mat1[i][k] * mat2[k][j];
                }
                res[i][j] = soma;
            }
        }

        printf("\nMatriz resultado.\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                printf("%f \t", res[i][j]);
            }
            printf("\n");
        }

    }
}
*/


////////ALOCAÇÃO DINAMICA


//9
/*
Escrever um programa que imprimi na tela a soma dos valores de cada coluna e de
cada linha de uma dada tabela. Utilize alocação dinâmica de memória, com leitura
do número de linhas, de colunas e dos valores da tabela via teclado.
*/
/*

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include<string.h>

void main(){
    float **mat;
    int linhas,colunas,i,j;

    printf("Digite o numero de linhas da tabela.\n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da tabela.\n");
    scanf("%d", &colunas);

    mat = malloc(linhas*sizeof(float));

    for(i=0; i<linhas; i++){
        mat[i] = malloc(colunas*sizeof(float));
    }
    printf("Digite o valor para cada linha e coluna da tabela.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%f", &mat[i][j]);
        }
    }

    printf("Matriz digitada.\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", mat[i][j]);
        }
        printf("\n");
    }


    for(i=0; i<linhas;i++){
        float somaLinha = 0.0;
        for(j=0; j<colunas; j++){
            somaLinha += mat[i][j];
        }
        printf("\nSoma linha %d: %f", i+1, somaLinha);
    }
    printf("--------------------------------------------------");
    for(i=0; i<colunas;i++){
        float somaColuna = 0.0;
        for(j=0; j<linhas; j++){
            somaColuna += mat[j][i];
        }
        printf("\nSoma Coluna %d: %f", i+1, somaColuna);
    }
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

}
*/


//12

/*
Escrever um programa, usando alocação dinâmica de memória, que lê n notas de
uma disciplina (0,0-10,0) de um estudante e calcular a média dessas notas
*/
/*
#include<math.h>
#include<stdio.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int n, i;

    printf("Digite a quantidade de notas da disciplina.\n");
    scanf("%d", &n);

    float *vetor = malloc(n*sizeof(float));

    for(i=0; i<n; i++){
        printf("Digite o valor da nota %d:\n", i+1);
        scanf("%f", &vetor[i]);
    }
    float somaNotas = 0.0;
    for(i=0; i<n; i++){
        somaNotas += vetor[i];
    }
    printf("\nA media eh: %f", somaNotas/n);

    free(vetor);

}
*/

//15

/*
Escrever um programa usando alocação dinâmica de memória para criar um vetor
a partir de um vetor de números inteiros, deslocando todos os números pares para
antes de todos os números ímpares.
*/

/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<complex.h>

void main(){
    int tamanhoVetor,i;
    int j=0;

    printf("Digite o tamanho do vetor a ser analisado.\n");
    scanf("%d", &tamanhoVetor);

    int *vetor= malloc(tamanhoVetor*sizeof(int));

    for(i=0; i<tamanhoVetor;i++){
        printf("Numero %d:\n", i+1);
        scanf("%d", &vetor[i]);
    }

    int *vetorArr = malloc(tamanhoVetor*sizeof(int));

    for(i=0; i<tamanhoVetor;i++){
       if(vetor[i]%2==0){
            vetorArr[j] = vetor[i];
            j+=1;
       }
    }

    for(i=0; i<tamanhoVetor;i++){
       if(vetor[i]%2!=0){
            vetorArr[j] = vetor[i];
            j+=1;
       }
    }
    printf("\nVetor Original:\n");
    for(i=0; i<tamanhoVetor; i++){
        printf("%d\n", vetor[i]);
    }

    printf("\nVetor Arrumado:\n");
    for(i=0; i<tamanhoVetor; i++){
        printf("%d\n", vetorArr[i]);
    }
    free(vetor);
    free(vetorArr);

}
*/


//16

/*
Escrever um programa usando alocação dinâmica para criar um novo vetor depois
de substituir todos os valores 7 em um vetor dado por 0, deslocando todos os zeros
para o começo do vetor
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int tamanhoVetor, i;
    int j=0;

    printf("Digite o tamanho do vetor.\n");
    scanf("%d", &tamanhoVetor);

    int *vetor = malloc(tamanhoVetor*sizeof(int));

    for(i=0; i<tamanhoVetor; i++){
        printf("Valor %d\n", i+1);
        scanf("%d", &vetor[i]);
    }


    printf("\nVetor Original:\n");
    for(i=0; i<tamanhoVetor; i++){
        printf("%d \t", vetor[i]);
    }
    printf("\n");
    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]==7){
            vetor[i] = 0;
        }
    }

    printf("\nVetor com 0:\n");
    for(i=0; i<tamanhoVetor; i++){
        printf("%d \t", vetor[i]);
    }
    printf("\n");
    int *vetorArrumado = malloc(tamanhoVetor*sizeof(int));


    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]==0){
            vetorArrumado[j] = vetor[i];
            j+=1;
        }
    }

    for(i=0; i<tamanhoVetor; i++){
        if(vetor[i]!=0){
            vetorArrumado[j] = vetor[i];
            j+=1;
        }
    }

    printf("\nVetor Arrumado:\n");
    for(i=0; i<tamanhoVetor; i++){
        printf("%d \t", vetorArrumado[i]);
    }
}
*/

//17

/*
Escrever um programa usando alocação dinâmica para verificar se um dado conjunto
de números inteiros contém 3 ou 5
*/
/*

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>
#include<stdbool.h>

void main(){
    int tamanhoConjunto,i;

    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanhoConjunto);

    int *conjunto = malloc(tamanhoConjunto*sizeof(int));

    for(i=0; i<tamanhoConjunto; i++){
        printf("Conjunto -> Numero %d\n", i+1);
        scanf("%d", &conjunto[i]);
    }
    bool numero3 = false;
    bool numero5= false;

    for(i=0; i<tamanhoConjunto; i++){
        if(conjunto[i]==3){
            numero3 = true;
        }
        if(conjunto[i]==5){
            numero5 = true;
        }
    }

    if(numero3== true && numero5==true){
        printf("\nO conjunto possui o numero 3 e o numero 5.");
    }else if(numero3==true){
        printf("\nO conjunto possui apenas o numero 3.");
    }else if(numero5==true){
        printf("\nO conjunto possui apenas o numero 5.");
    }else{
        printf("\nO conjunto nao possui o numero 3 nem o numero 5.");
    }


}
*/


//18

/*
Escrever um programa usando alocação dinâmica para verificar se a soma de todos
os valores ímpares em um vetor levam exatamente a 32.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int tamanhoConjunto, i;

    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanhoConjunto);

    int *conjunto = malloc(tamanhoConjunto*sizeof(int));

    for(i=0; i<tamanhoConjunto; i++){
        printf("Valor %d\n", i+1);
        scanf("%d", &conjunto[i]);
    }
    int somaImpar = 0;

    for(i=0; i<tamanhoConjunto; i++){
        if(conjunto[i]%2!=0){
            somaImpar += conjunto[i];
        }
    }
    if(somaImpar==32){
        printf("\nA soma dos valores impares eh 32.");
    }
    else{
        printf("\nA soma dos valores impares eh %d", somaImpar);
    }
}
*/

//14

/*
Escrever um programa que troca dois números dentre as variáveis em que eles estão,
sem utilizar uma terceira variável.
*/
/*
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>
#include<stdlib.h>

void main(){
    int numero1, numero2;

    printf("Digite o primeiro numero.\n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero.\n");
    scanf("%d", &numero2);

    numero1= numero1+numero2;
    numero2 = numero1-numero2;
    numero1=numero1-numero2;

    printf("\nNumero 1: %d", numero1);
    printf("\nNumero 2: %d", numero2);
}
*/

//19

/*
Escrever um programa usando alocação dinâmica para calcular a soma dos números de uma determinada matriz. Número de colunas, linhas e valores devem ser
fornecidos via teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int linhas, colunas,i, j;

    printf("Digite o numero de linhas da matriz.\n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz.\n");
    scanf("%d", &colunas);

    float **mat = malloc(linhas*sizeof(float));

    for(i=0; i<linhas; i++){
        mat[i] = malloc(colunas*sizeof(float));
    }
    printf("\nPreencha a matriz.\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Linha:%d  Coluna:%d\n", i+1,j+1);
            scanf("%f", &mat[i][j]);
        }
    }
    printf("\nMatriz final.\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", mat[i][j]);
        }
        printf("\n");
    }

    float soma=0.0;
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
           soma+= mat[i][j];
        }
    }
    for(i=0; i<linhas; i++){
        free(mat[i]);
    }
    free(mat);

    printf("\nA soma eh: %f", soma);
}
*/

//20

/*
Escrever um programa usando alocação dinâmica para ordenar os elementos de um
vetor.
*/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>

void main(){
    int tamanhoVetor, i, j;

    printf("Digite o tamanho do conjunto de dados.\n");
    scanf("%d", &tamanhoVetor);

    int *vetor = malloc(tamanhoVetor*sizeof(int));
    printf("\nPreencha o conjunto de dados.\n");
    for(i=0; i<tamanhoVetor; i++){
        printf("Numero %d:\n", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("\nConjunto de dados:\n");
    for(i=0; i<tamanhoVetor; i++){
       printf("%d \n", vetor[i]);
    }

    int aux;
    for(i=0; i<tamanhoVetor-1; i++){
        for(j=0; j<tamanhoVetor-1-i; j++){
            if(vetor[j]>vetor[j+1]){
                aux= vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\nVetor ordenado\n");
    for(i=0; i<tamanhoVetor; i++){
       printf("%d \n", vetor[i]);
    }
    free(vetor);
}
*/
//25

/*
Escrever um programa usando alocação dinâmica que recebe número de linhas e
número de colunas de uma matriz via teclado e por uma alguma regra preenche a
matriz com valores não nulos variáveis e a imprime na tela
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas da matriz.\n");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz.\n");
    scanf("%d", &colunas);

    float **mat = malloc(linhas*sizeof(float*));

    for(i=0; i<linhas; i++){
        mat[i] = malloc(colunas*sizeof(float));
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            mat[i][j] = sin(i*j)+ pow(i,j);
        }
    }


    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<linhas; i++){
        free(mat[i]);
    }
    free(mat);

}
*/

//26

/*
Escrever um programa usando alocação dinâmica para somar duas matrizes, imprimindo na tela o resultado (número de linhas, de colunas e valores nas matrizes vem
do teclado).
*/
/*
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<complex.h>
#include<string.h>

void main(){
    int linhas, colunas, i,j;

    printf("Digite o numero de linhas das matrizes.\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas das matrizes.\n");
    scanf("%d", &colunas);

    float **mat1 = malloc(linhas*sizeof(float*));
    float **mat2 = malloc(linhas*sizeof(float*));
    float **mat3 = malloc(linhas*sizeof(float*));

    for(i=0; i<linhas; i++){
        mat1[i]= malloc(colunas*sizeof(float));
        mat2[i]= malloc(colunas*sizeof(float));
        mat3[i]= malloc(colunas*sizeof(float));
    }

    printf("\nPreencha a primeira matriz.\n");

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d Coluna: %d:\n", i+1, j+1);
            scanf("%f", &mat1[i][j]);
        }
    }

    printf("\nPreencha a segunda matriz.\n");

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d Coluna: %d:\n", i+1, j+1);
            scanf("%f", &mat2[i][j]);
        }
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            mat3[i][j]= mat1[i][j] + mat2[i][j];
        }
    }
    printf("\nMatriz1\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz2\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz3\n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", mat3[i][j]);
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

//32

/*
Escrever um programa, usando alocação dinâmica, para realizar a multiplicação
de duas matrizes. Números de linhas, colunas e valores nas matrizes devem ser
recebidos do teclado.
*/

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int linhas1, colunas1, linhas2, colunas2, i, j, k;

    //MATRIZ1
    printf("Digite o numero de linhas da primeira matriz.\n");
    scanf("%d", &linhas1);
    printf("Digite o numero de colunas da primeira matriz.\n");
    scanf("%d", &colunas1);

    //MATRIZ2
    printf("\nDigite o numero de linhas da segunda matriz.\n");
    scanf("%d", &linhas2);
    printf("\nDigite o numero de colunas da segunda matriz.\n");
    scanf("%d", &colunas2);

    if(colunas1==linhas2){
        float **mat1 = malloc(linhas1*sizeof(float*));
        float **mat2 = malloc(linhas2*sizeof(float*));
        float **mat3 = malloc(linhas1*sizeof(float*));

        for(i=0; i<linhas1; i++){
            mat1[i] = malloc(colunas1*sizeof(float));
        }

        for(i=0; i<linhas2; i++){
            mat2[i] = malloc(colunas2*sizeof(float));
        }

        for(i=0; i<linhas1; i++){
            mat3[i] = malloc(colunas2*sizeof(float));
        }

        printf("\nPreencha a matriz 1.\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){
                printf("Linha:%d Coluna:%d:\n", i+1, j+1);
                scanf("%f", &mat1[i][j]);
            }
        }

        printf("\nPreencha a matriz 2.\n");
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){
                printf("Linha: %d Coluna: %d\n", i+1, j+1);
                scanf("%f", &mat2[i][j]);
            }
        }

        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                float soma =0.0;
                for(k=0; k<colunas1; k++){
                    soma+= mat1[i][k]*mat2[k][j];
                }
                mat3[i][j]= soma;
            }
        }

        //IMPRIMINDO MATRIZES
        printf("\nMatriz 1.\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas1; j++){
                printf("%f \t", mat1[i][j]);
            }
            printf("\n");
        }

        printf("\nMatriz 2.\n");
        for(i=0; i<linhas2; i++){
            for(j=0; j<colunas2; j++){
                printf("%f \t", mat2[i][j]);
            }
            printf("\n");
        }

        printf("\nMatriz 3.\n");
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2; j++){
                printf("%f \t", mat3[i][j]);
            }
            printf("\n");
        }

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
    else{
        printf("\nO numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz.");
    }
}
