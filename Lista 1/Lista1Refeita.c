//Lista 1 refeita para estudar para a prova

//Q1

/*
Escrever um programa para converter uma quantidade de dias em anos, semanas e
dias (desconsidere a ocorrência de ano bissexto).
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int quantidade_dias, anos, semanas, dias;
    printf("Digite a quantidade de dias que sera convertida para anos, semanas e dias.\n");
    scanf("%d", &quantidade_dias);
    anos = quantidade_dias/365;
    semanas = (quantidade_dias%365)/7;
    dias = (quantidade_dias%365)%7;

    if(anos==1){
        printf("%d ano,", anos);
    }
    else{
        printf("%d anos,", anos);
    }
    if(semanas==1){
        printf(" %d semana,", semanas);
    }
    else{
       printf(" %d semanas,", semanas);
    }
    if(dias==1){
        printf(" e %d dia.", dias);
    }
    else{
        printf(" e %d dias.", dias);
    }
}
*/

//Q2

/*
Escrever um programa que aceite a identificação de um empregado, o total de horas
trabalhadas de um mês e a quantia que recebeu por hora. A seguir deve ser impressa
na tela a identificação e o salário do empregado (com duas casas decimais) de um
determinado mês.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    char identificacao[50];
    int horas_trabalhadas;
    float salario_hora;

    printf("Digite a identificacao do empregado: ");
    scanf("%s", identificacao);
    printf("Digite a quantidade total de horas trabalhadas do funcionario %s no mes.\n", identificacao);
    scanf("%d", &horas_trabalhadas);
    printf("Digite o salario por hora do funcionario %s.\n", identificacao);
    scanf("%f", &salario_hora);

    printf("\nFuncionario: %s\n", identificacao);
    printf("Salario: %.2f", salario_hora*horas_trabalhadas);

}
*/

//Q3

/*
Escrever um programa que aceite três números inteiros e encontre o máximo dentre
os três.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int num1, num2, num3;

   //Forma 1: comparacao direta
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if(num1>num2){
            if(num1>num3){
                    printf("O maior numero eh: %d", num1);
            }else{
                    printf("O maior numero eh: %d", num3);
            }
    }
    else{
        if(num2>num3){
            printf("O maior numero eh: %d", num2);
        }
        else{
            printf("O maior numero eh: %d", num3);
        }
    }
    //Forma dois: maior valor de um vetor
    int vetor[3],i;
    for(i=0; i<3; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int maior = -1000000;
    for(i=0; i<3; i++){
        if(vetor[i]> maior){
            maior = vetor[i];
        }
    }
    printf("O maior valor eh: %d", maior);

}*/

//Q4

/*
Escrever um programa para calcular a distância entre os dois pontos no espaço 3D
utilizando coordenadas cartesianas.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    float x1,y1,z1,x2,y2,z2;

    printf("Digite as componentes x,y e z do primeiro ponto: ");
    scanf("%f %f %f", &x1, &y1, &z1);
    printf("P1: (%f, %f, %f)\n", x1,y1,z1);

    printf("Digite as componentes x,y e z do segundo ponto: ");
    scanf("%f %f %f", &x2, &y2, &z2);
    printf("P2: (%f, %f, %f)\n", x2,y2,z2);

    float distancia = sqrt(  (pow(x2-x1,2.0)) +  (pow(y2-y1,2.0)) + (pow(z2-z1,2.0)) );

    printf("A distancia entre P1 e P2 eh: %f", distancia);

}
*/

//Q5

/*
Escrever um programa que aceita 4 inteiros p, q, r e s do usuário, onde q, r e s são
positivos e p é par. Se q for maior que r e s for maior que p e se a soma de r e s for
maior que a soma de p e q, imprimir Valores certos, caso contrário imprimir Valores
errados.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int p,q,r,s;
    //Verificando se p eh positivo e par
    while(1){
        printf("Digite o numero p (inteiro e positivo e par): ");
        scanf("%d", &p);
        if(p<0){
            printf("O numero p deve ser maior que 0.");
        }else if(p%2!=0){
            printf("O numero p deve ser par.");
        }else{
            break;
        }
    }
    //Verificando se q eh inteiro positivo
    while(1){
        printf("Digite o numero q (inteiro e positivo): ");
        scanf("%d", &q);
        if(q<0){
            printf("O numero p deve ser maior que 0.");
        }else{
            break;
        }
    }
    //Verificando se r eh inteiro positivo
    while(1){
        printf("Digite o numero r (inteiro e positivo): ");
        scanf("%d", &r);
        if(r<0){
            printf("O numero p deve ser maior que 0.");
        }else{
            break;
        }
    }

    //Verificando se s eh inteiro positivo
    while(1){
        printf("Digite o numero s (inteiro e positivo): ");
        scanf("%d", &s);
        if(s<0){
            printf("O numero p deve ser maior que 0.");
        }else{
            break;
        }
    }

    if(q>r && s>p && (r+s)>(p+q)){
        printf("Valores certos.");
    }else{
        printf("Valores errados.");
    }
}
*/

//Q6

/*
 Escrever um programa para imprimir raízes usando a fórmula de Bhaskara a partir
de três números em ponto flutuantes indicados como os coeficientes da equação de
segundo grau. Mostrar uma mensagem se não for possível encontrar as raízes.
*/
/*
#include<stdio.h>
#include<complex.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

void main(){
    float a,b,c;

    printf("Digite os coeficientes da equacao de segundo grau (a*x^2 + b*x + c=0).\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    float delta = pow(b,2.0) - 4*a*c;
    float raiz1, raiz2;
    if(delta<0){
        printf("Nao eh possivel encontrar as raizes, delta<0.\n");
    }else if(delta==0){
        raiz1 = (-b +sqrt(delta))/(2*a);
        printf("Raizes iguais.\nr:%f", raiz1);
    }
    else{
        raiz1 = (-b +sqrt(delta))/(2*a);
        raiz2 = (-b -sqrt(delta))/(2*a);
        printf("Raiz 1: %f\n", raiz1);
        printf("Raiz 2: %f", raiz2);
    }
}
*/

//Q7

/*
Escrever um programa que lê três valores em ponto flutuante do teclado e verifica se
é possível fazer um triângulo com eles. Calcular também o perímetro do triângulo,
se os referidos valores forem válidos.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    float l1,l2,l3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%f", &l1);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%f", &l2);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%f", &l3);

    if( (l1+l2)>l3 && (l1+l3)>l2 && (l2+l3)>l1){
        float perimetro = l1+l2+l3;
        printf("Eh possivel fazer um triangulo.\nPerimetro: %f.", perimetro);
    }
    else{
        printf("Nao eh possivel fazer um triangulo com os valores inseridos.");
    }
}
*/

//Q8

/*
Escrever um programa para encontrar e imprimir o quadrado de cada um dos valores
pares de 1 até um valor especificado via teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int num, i;
    printf("Digite o numero limite para calculo do quadrados dos pares: ");
    scanf("%d", &num);

    for(i=0;i<num;i++){
        if((i+1)%2==0){
            printf("%d^2: %f\n", i+1, pow(i+1,2.0));
        }
    }
}
*/

//Q9

/*
 Escrever um programa que imprimi na tela a soma dos valores de cada coluna e de
cada linha de uma dada tabela. Utilize alocação dinâmica de memória, com leitura
do número de linhas, de colunas e dos valores da tabela via teclado.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int linhas, colunas, i, j;
    printf("Digite o numero de linhas da tabela: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da tabela: ");
    scanf("%d", &colunas);

    float **tabela = malloc(linhas*sizeof(float*));

    for(i=0; i<linhas; i++){
        tabela[i] = malloc(colunas*sizeof(float));
    }
    printf("Preencha a tabela:\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%f", &tabela[i][j]);
        }
    }

    printf("Tabela:\n");
    for(i=0; i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", tabela[i][j]);
        }
        printf("\n");
    }


     for(i=0; i<linhas;i++){
        float soma_linha=0.0;
        for(j=0; j<colunas; j++){
           soma_linha += tabela[i][j];
        }
        printf("Soma da linha %d: %f\n", i+1, soma_linha);
    }

    for(i=0; i<colunas;i++){
        float soma_coluna=0.0;
        for(j=0; j<linhas; j++){
           soma_coluna += tabela[j][i];
        }
        printf("Soma da coluna %d: %f\n", i+1, soma_coluna);
    }

    for(i=0; i<linhas; i++){
        free(tabela[i]);
    }
    free(tabela);
}
*/

//Q10

/*
Escrever um programa para testar se duas linhas são paralelas ou não. Os quatro
pontos são a serem considerados são P(x1, y1), Q(x2, y2), R(x3, y3) e S(x4, y4),
para verificar se PQ e RS são paralelos ou não.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    float x1,x2,x3,x4,y1,y2,y3,y4;
    printf("Digite as componentes x e y do ponto P: ");
    scanf("%f %f", &x1, &y1);
    printf("P=(%f, %f)\n", x1,y1);

    printf("Digite as componentes x e y do ponto Q: ");
    scanf("%f %f", &x2, &y2);
    printf("Q=(%f, %f)\n", x2,y2);

    printf("Digite as componentes x e y do ponto R: ");
    scanf("%f %f", &x3, &y3);
    printf("R=(%f, %f)\n", x3,y3);

    printf("Digite as componentes x e y do ponto S: ");
    scanf("%f %f", &x4, &y4);
    printf("S=(%f, %f)\n", x4,y4);

    float m1,m2;

    m1 = (y2-y1)/(x2-x1);
    m2 = (y4-y3)/(x4-x3);

    if(m1==m2){
        printf("Os segmentos PQ e RS sao paralelos.");
    }else{
        printf("Os segmentos PQ e RS nao sao paralelos.");
    }
}
*/

//Q11

/*
Escrever um programa para encontrar os números primos que são inferiores ou iguais
a um determinado número inteiro
*/
/*

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int num_max, i ,j;

    printf("Digite o numero maximo que sera utilizado para encontrar os primos antecessores: ");
    scanf("%d", &num_max);
    printf("Primos:\n");
    for(i=2; i<=num_max; i++){
        int primo =0;
        for(j=2; j<i; j++){
            if(i%j==0){
                primo+=1;
            }
        }
        if(primo==0){
            printf("%d \n", i);
        }
    }

}

*/

//Q12

/*
Escrever um programa, usando alocação dinâmica de memória, que lê n notas de
uma disciplina (0,0,-10,0) de um estudante e calcular a média dessas notas.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int num_notas, i;

    printf("Digite a quantidade de notas do aluno: ");
    scanf("%d", &num_notas);

    float *notas = malloc(num_notas*sizeof(float));

    printf("Digite as notas: \n");
    for(i=0; i<num_notas; i++){
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
    float soma_notas = 0.0;
    for(i=0; i<num_notas; i++){
       soma_notas += notas[i];
    }

    printf("A media eh: %f", soma_notas/num_notas);

    free(notas);
}*/

//Q13

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
#include<stdlib.h>

void main(){
    int escolha;
    float temperatura;

    printf("Escolha uma opcao de conversao:\n1- Fahrenheit -> Celsius.\n2- Celsius -> Fahrenheit.\n");
    scanf("%d", &escolha);

    printf("Digite a temperatura que deseja converter: ");
    scanf("%f", &temperatura);

    float converte;
    if(escolha==1){
        converte = (5/9)*(temperatura-32);
        printf("%f Fahrenheit = %f Celsius.", temperatura, converte);
    }else if(escolha==2){
        converte = temperatura*(9/5) + 32;
        printf("%f Celsius = %f Fahrenheit.", temperatura, converte);
    }else{
        printf("Escolha uma opcao valida.");
    }

}
*/

//Q14

/*
Escrever um programa que troca dois números dentre as variáveis em que eles estão,
sem utilizar uma terceira variável.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int num1,num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Antes da troca:\n");
    printf("Num1: %d, Num2: %d\n", num1, num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;

    printf("Depois da troca:\n");
    printf("Num1: %d, Num2: %d", num1, num2);
}
*/

//Q15

/*
Escrever um programa usando alocação dinâmica de memória para criar um vetor
a partir de um vetor de números inteiros, deslocando todos os números pares para
antes de todos os números ímpares.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int qnt_dados, i;
    int d=0;

    printf("Digite a quantidade de valores do vetor: ");
    scanf("%d", &qnt_dados);

    int *vetor = malloc(qnt_dados*sizeof(int));
    int *vetor_final = malloc(qnt_dados*sizeof(int));
    printf("Preencha o vetor: \n");
    for(i=0; i<qnt_dados; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    //Pegando os pares
    for(i=0; i<qnt_dados; i++){
        if(vetor[i]%2==0){
            vetor_final[d] = vetor[i];
            d++;
        }
    }
    //Pegando os impares
    for(i=0; i<qnt_dados; i++){
        if(vetor[i]%2!=0){
            vetor_final[d] = vetor[i];
            d++;
        }
    }
    printf("Vetor final:\n");
    for(i=0; i<qnt_dados; i++){
        printf("%d \t", vetor_final[i]);
    }
    free(vetor);
    free(vetor_final);
}
*/

//Q16

/*
Escrever um programa usando alocação dinâmica para criar um novo vetor depois
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
    int qnt_dados, i, d;
    d=0;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &qnt_dados);

    int *vetor = malloc(qnt_dados*sizeof(int));
    int *vetor_final = malloc(qnt_dados*sizeof(int));

    //Preenchendo o vetor
    printf("Preencha o vetor:\n");
    for(i=0; i<qnt_dados; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }


    //Trocando os 7 por 0 e colocando o zero no novo vetor
    for(i=0; i<qnt_dados; i++){
        if(vetor[i]==7){
            vetor[i]=0;
            vetor_final[d] = vetor[i];
            d++;
        }
    }
    //Preenchendo o vetor com outros valores
    for(i=0; i<qnt_dados; i++){
        if(vetor[i]!=0){
            vetor_final[d] = vetor[i];
            d++;
        }
    }
    printf("Vetor reorganizado: \n");
    for(i=0; i<qnt_dados; i++){
        printf("%d \t", vetor_final[i]);
    }
    free(vetor);
    free(vetor_final);
}
*/

//Q17

/*
Escrever um programa usando alocação dinâmica para verificar se um dado conjunto
de números inteiros contém 3 ou 5.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int qnt_dados, i;
    printf("Digite a quantidade de dados do conjunto: ");
    scanf("%d", &qnt_dados);
    int *vetor = malloc(qnt_dados*sizeof(int));
    printf("Preencha o conjunto de dados: \n");
    for(i=0; i<qnt_dados; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    int somaTres = 0;
    int somaCinco = 0;
    for(i=0; i<qnt_dados; i++){
        if(vetor[i]==3){
            somaTres+=1;
        }else if(vetor[i]==5){
            somaCinco+=1;
        }
    }

    if(somaTres>0 && somaCinco>0){
        printf("O conjunto tem o numero 3 e o numero 5.");
    }else if(somaTres>0){
        printf("O conjunto de dados tem apenas o numero 3.");
    }else if(somaCinco>0){
        printf("O conjunto de dados tem apenas o numero 5.");
    }else{
        printf("O conjunto de dados nao tem 3 nem 5.");
    }
    free(vetor);
}
*/

//Q18

/*
Escrever um programa usando alocação dinâmica para verificar se a soma de todos
os valores ímpares em um vetor levam exatamente a 32.
*/

/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int qnt_dados, i, soma_impares;
    soma_impares=0;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &qnt_dados);
    int *vetor = malloc(qnt_dados*sizeof(int));

    printf("Preencha o conjunto de dados:\n");
    for(i=0; i<qnt_dados; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i=0; i<qnt_dados; i++){
        if(vetor[i]%2!=0){
            soma_impares+=vetor[i];
        }
    }
    if(soma_impares==32){
        printf("A soma dos valores impares levam exatamente a 32.");
    }else{
        printf("A soma dos valores impares nao levam a 32, levam a: %d", soma_impares);
    }

}
*/

//Q19

/*
Escrever um programa usando alocação dinâmica para calcular a soma dos números de uma determinada matriz. Número de colunas, linhas e valores devem ser
fornecidos via teclado
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    float **matriz = malloc(linhas*sizeof(float*));
    for(i=0; i<linhas; i++){
        matriz[i] = malloc(colunas*sizeof(float));
    }

    printf("Preencha a matriz: \n");
    for(i=0;i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    float soma = 0.0;
    for(i=0;i<linhas;i++){
        for(j=0; j<colunas; j++){
            soma+=matriz[i][j];
        }
    }
    printf("A soma da matriz eh: %f", soma);
    for(i=0; i<linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}
*/
//Q20

/*
Escrever um programa usando alocação dinâmica para ordenar os elementos de um
vetor.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    int data_quantity, i, j;
    printf("Digite a quantidade de dados do vetor: ");
    scanf("%d", &data_quantity);

    int *vetor = malloc(data_quantity*sizeof(int));
    int aux;

    printf("Preencha o vetor:\n");
    for(i=0; i<data_quantity; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Vetor original:\n");
    for(i=0; i<data_quantity; i++){
        printf("%d \t", vetor[i]);
    }

    for(i=0; i<data_quantity-1; i++){
        for(j=0; j<data_quantity-i-1; j++){
            if(vetor[j]>vetor[j+1]){
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
    printf("\nVetor organizado: \n");
    for(i=0; i<data_quantity; i++){
        printf("%d \t", vetor[i]);
    }
    free(vetor);
}
*/

//Q21

/*
Escrever um programa para receber um ponto no sistema de coordenadas xy e
determinar em que quadrante se situa o ponto.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    float x,y;

    printf("Digite as coordenadas x e y do ponto: ");
    scanf("%f %f", &x, &y);

    printf("P = (%f,%f)\n", x,y);

    if(x>0 && y>0){
        printf("Primeiro quadrante.");
    }else if(x>0 && y<0){
        printf("Quarto quadrante.");
    }else if(x<0 && y <0){
        printf("Terceiro quadrante.");
    }else{
        printf("Segundo quadrante.");
    }
}
*/

//Q22

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
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    float matematica, fisica, quimica;

    printf("Digite a nota de matematica: ");
    scanf("%f", &matematica);
    printf("Digite a nota de fisica: ");
    scanf("%f", &fisica);
    printf("Digite a nota de quimica: ");
    scanf("%f", &quimica);

    if(matematica>=65 && fisica>=60 && quimica>=55 && ((matematica+fisica+quimica>=190) || (matematica+fisica>=140)){
        printf("Elegivel de admissao. :)");
    }else{
        printf("Inelegivel de admissao. :(");
    }

}
*/

//Q23

/*
Escrever um programa para verificar se um triângulo é equilátero, isósceles ou escaleno.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int lado1, lado2, lado3;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &lado1);
    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &lado2);
    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &lado3);

    if(lado1==lado2 && lado2==lado3){
        printf("Triangulo equilatero.");
    }else if( lado1==lado2 || lado2==lado3 || lado1==lado3 ){
        printf("Triangulo isosceles.");
    }else{
        printf("Triangulo escaleno.");
    }
}
*/

//Q24

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
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

void main(){
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if(nota>=0 && nota<=4){
        printf("R - Reprovado.");
    }else if(nota>4 && nota<=7){
        printf("N - Na media");
    }else if(nota>7 && nota<=9){
        printf("B - Bom");
    }else if(nota>9 && nota <=10){
        printf("E - Excelente");
    }else{
        printf("Digite uma nota valida.");
    }
}
*/

//Q25

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

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    float **matriz = malloc(linhas*sizeof(float*));

    for(i=0; i<linhas; i++){
        matriz[i] = malloc(colunas*sizeof(float));
    }

    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            matriz[i][j] = (i+1)*(j+2);
        }
    }
    printf("Matriz: \n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}
*/

//Q26

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
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas das matrizes: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas das matrizes: ");
    scanf("%d", &colunas);

    float **matriz1 = malloc(linhas*sizeof(float*));
    float **matriz2 = malloc(linhas*sizeof(float*));
    float **matriz3 = malloc(linhas*sizeof(float*));

    for(i=0; i<linhas;i++){
        matriz1[i] = malloc(colunas*sizeof(float));
        matriz2[i] = malloc(colunas*sizeof(float));
        matriz3[i] = malloc(colunas*sizeof(float));
    }
    //Preenchendo a matriz 1
    printf("Preencha a primeira matriz: \n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%f", &matriz1[i][j]);
        }
    }
    //Preenchendo a matriz 2
    printf("Preencha a segunda matriz: \n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("Linha: %d, Coluna: %d\n", i+1,j+1);
            scanf("%f", &matriz2[i][j]);
        }
    }

    //Soma das matrizes
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    //Imprimindo a matriz 1
    printf("Matriz 1: \n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", matriz1[i][j]);
        }
        printf("\n");
    }
    //Imprimindo a matriz 2
    printf("Matriz 2: \n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", matriz2[i][j]);
        }
        printf("\n");
    }

    //Imprimindo a matriz 3
    printf("Matriz 3: \n");
    for(i=0; i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", matriz3[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<linhas;i++){
        free(matriz1[i]);
        free(matriz2[i]);
        free(matriz3[i]);
    }
    free(matriz1);
    free(matriz2);
    free(matriz3);
}*/


//Q27

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
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int max_number, i, j, d;
    printf("Digite o maior valor possivel: ");
    scanf("%d", &max_number);

    d =1;

    for(i=1; i<=max_number; i++){
        for(j=1; j<=i;j++){
            if(d<=max_number){
               printf("%d \t", d);
                d++;
            }
            else{
                return;
            }
        }
        printf("\n");
    }
}
*/

//Q28

/*
Escrever um programa para encontrar a soma da série 1 − X2/2! + X4/4! − ... até
um dado n-ésimo termo.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<string.h>
#include<stdlib.h>

int fatorial(int n);
void main(){
    int n_esimo, i, x;

    printf("Digite o termo final utilizado na soma da serie: ");
    scanf("%d", &n_esimo);

    printf("Digite o valor de x utilizado na serie: ");
    scanf("%d", &x);

    float soma_serie=0.0;
    for(i=0; i<=n_esimo; i+=2){
        soma_serie += (pow(x,i))/(fatorial(i));
    }
    printf("A soma da serie eh: %f", soma_serie);
}
int fatorial(int n){
    if(n==0){
        return 1;
    }else if(n==1){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}
*/

//Q29

/*
Escrever um programa para mostrar os n termos da série harmónica (1 + 1/2 +
1/3 + 1/4 + 1/5 ... 1/n) e a sua soma
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int final_number, i;

    printf("Digite o numero final da serie harmonica: ");
    scanf("%d", &final_number);

    float soma =0.0;
    for(i=1; i<=final_number; i++){
        printf("1/%d: %f\n", i, (1.0/i));
        soma += 1.0/i;
    }

    printf("A soma final eh: %f", soma);
}
*/

//Q30
/*
Escrever um programa para exibir um número em ordem inversa
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Numero inverso: \n");
    while(numero>0){
        printf("%d", numero%10);
        numero = numero/10;
    }
}
/*

//Q31
/*
Escrever um programa para verificar se um número é um palíndromo ou não.
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int numero, novo_numero,i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    novo_numero=numero;
    int tam_num = 0;

    while (numero > 0) {
        tam_num++;
        numero = numero / 10;
    }
    int vetor_num[tam_num];
    int vetor_numInv[tam_num];

    for(i=0;i<tam_num;i++){
        vetor_num[tam_num-i-1] = novo_numero%10;
        vetor_numInv[i] = novo_numero%10;
        novo_numero = novo_numero/10;
    }
    printf("Numero: \n");
    for(i=0;i<tam_num; i++){
        printf("%d", vetor_num[i]);
    }

    printf("\nNumero Invertido: \n");
    for(i=0;i<tam_num; i++){
        printf("%d", vetor_numInv[i]);
    }

    int diferentes = 0;
    for(i=0;i<tam_num; i++){
        if(vetor_num[i]!= vetor_numInv[i]){
            diferentes+=1;
        }
    }
    if(diferentes>0){
        printf("\nO numero nao eh palindromo.");
    }else{
        printf("\nO numero eh palindromo.");
    }

}
*/

//Q32

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
    int linhas1, colunas1, linhas2, colunas2;
    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%d", &linhas1);
    printf("Digite o numero de colunas da primeira coluna: ");
    scanf("%d", &colunas1);

    printf("Digite o numero de linhas da segunda matriz: ");
    scanf("%d", &linhas2);
    printf("Digite o numero de colunas da segunda coluna: ");
    scanf("%d", &colunas2);

    if(colunas1!=linhas2){
        printf("O numero de colunas da primeira matriz deve ser igual ao numero de linhas da segunda matriz para realizar a multiplicacao.");
        return;
    }else{
        int i,j, k;
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
        //Preenchendo a matriz 1
        printf("Preencha a matriz 1:\n");
        for(i=0;i<linhas1; i++){
            for(j=0;j<colunas1;j++){
                printf("Linha: %d, Coluna: %d\n", i+1, j+1);
                scanf("%f", &matriz1[i][j]);

            }
        }

        //Preenchendo a matriz 1
        printf("Preencha a matriz 2:\n");
        for(i=0;i<linhas2; i++){
            for(j=0;j<colunas2;j++){
                printf("Linha: %d, Coluna: %d\n", i+1, j+1);
                scanf("%f", &matriz2[i][j]);
            }
        }

        //Multiplicacao das matrizes
        for(i=0; i<linhas1; i++){
            for(j=0; j<colunas2;j++){
                float mult = 0.0;
                for(k=0; k<colunas1; k++){
                    mult += matriz1[i][k]*matriz2[k][j];
                }
                matriz3[i][j]= mult;
            }
        }

        //Imprimindo a matriz 1
        printf("\nMatriz 1: \n");
        for(i=0;i<linhas1; i++){
            for(j=0;j<colunas1;j++){
                printf("%f \t", matriz1[i][j]);
            }
            printf("\n");
        }
        //Imprimindo a matriz 2
        printf("\nMatriz 2: \n");
        for(i=0;i<linhas2; i++){
            for(j=0;j<colunas2;j++){
                printf("%f \t", matriz2[i][j]);
            }
            printf("\n");
        }

        //Imprimindo a matriz 3
        printf("\nMatriz 3: \n");
        for(i=0;i<linhas1; i++){
            for(j=0;j<colunas2;j++){
                printf("%f \t", matriz3[i][j]);
            }
            printf("\n");
        }

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


}

