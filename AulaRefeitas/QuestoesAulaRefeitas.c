//04/04/2025 -> multiplicacao matriz e vetor
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int linhas, colunas, i, j;
    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz e de linhas do vetor: ");
    scanf("%d", &colunas);

    float matriz[linhas][colunas];
    float vet[colunas];
    float vet_resultado[linhas];
    for(i=0;i<linhas; i++){
        for(j=0; j<colunas; j++){
            matriz[i][j]= (i+1)*(j+2);
        }
    }
    for(i=0; i<colunas; i++){
        vet[i] = pow(i,2.0) + 1;
    }

    printf("Matriz : \n");
    for(i=0;i<linhas; i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Vetor : \n");
    for(i=0;i<colunas; i++){
        printf("%f \n", vet[i]);
    }

    for(i=0; i<linhas; i++){
        float soma = 0.0;
        for(j=0; j<colunas; j++){
            soma += matriz[i][j]*vet[j];
        }
        vet_resultado[i] = soma;
    }
    printf("Matriz * Vetor: \n");
    for(i=0;i<linhas; i++){
        printf("%f \n", vet_resultado[i]);
    }
}
*/

//08/04/2025

/*
Multiplicacao Escalar
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int tam_vetor, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_vetor);
    int vet1[tam_vetor];
    int vet2[tam_vetor];
    printf("Preencha o primeiro vetor:\n");
    for(i=0; i<tam_vetor;i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet1[i]);
    }
    printf("Preencha o segundo vetor:\n");
    for(i=0; i<tam_vetor;i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet2[i]);
    }
    int soma =0;
    for(i=0;i<tam_vetor; i++){
        soma+= vet1[i]*vet2[i];
    }

    printf("A multiplicacao escalar eh: %d", soma);

}
*/

/*
Metodo de newton raphson
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int contador = 0;
    int nMaxIt = 1000000;
    float tol = pow(10,-6);

    float x_atual, x_novo;

    x_atual = 1.0;
    // f(x) = cos(x) - x^2
    while(contador<nMaxIt){
        x_novo = x_atual - (cos(x_atual) - pow(x_atual,2.0)) / (-sin(x_atual)-2*x_atual);
        float erro = fabs(x_novo-x_atual);

        if(erro<tol){
            printf("Raiz aproximada: %f", x_novo);
            break;
        }else{
           printf("x_atual: %f, x_novo: %f\n", x_atual, x_novo);
           printf("--------------------------------------------------------\n");

        }
        x_atual= x_novo;
        contador++;
        if(contador == nMaxIt){
            printf("Numero maximo de iteracoes alcancado.\nValor encontrado: %f", x_atual);
            break;
        }
    }

}
*/

//11/04/2025

/*
Criar matriz e dois vetores com alocacao dinamica (questao funciona apenas para matrizes quadradas), Preenche a matriz 1 e o vetor 1, define um numero maximo de tentativas e faz o seguinte:
enquanto a magnitude do vetor 1 for maior que 1 multiplica matriz 1 pelo vetor 1, o resultado vai para um vetor 2
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>

void main(){
    int linhas, colunas, i, j;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    float **matriz = malloc(linhas*sizeof(float*));
    float *vet1 = malloc(colunas*sizeof(float));
    float *vet2 = malloc(colunas*sizeof(float));

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

    printf("Matriz 1:\n");
    for(i=0;i<linhas;i++){
        for(j=0; j<colunas; j++){
            printf("%f \t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Preencha o vetor:\n");
    for(i=0;i<colunas;i++){
        printf("Elemento %d: ", i+1);
        scanf("%f", &vet1[i]);
    }

    printf("Vetor Inicial:\n");
    for(i=0;i<colunas;i++){
        printf("%f \n", vet1[i]);
    }

    int nMax=10;
    int contador =0;

    float magnitude;
    while(contador<nMax){
        float soma =0;
        for(i=0; i<colunas; i++){
            soma += pow(vet1[i],2.0);
        }
        magnitude = sqrt(soma);
        printf("Magnitude: %f\n", magnitude);
        if(magnitude<1){
            printf("Vetor final:\n");
            for(i=0;i<colunas;i++){
                printf("%f \n", vet1[i]);
            }
            break;
        }else{
            //Multiplicando a matriz com o vetor
             for(i=0;i<linhas;i++){
                float elemento =0;
                for(j=0; j<colunas; j++){
                    elemento+= matriz[i][j]*vet1[j];
                }
                vet2[i] = elemento;
            }
            printf("Novo vetor: \n");
            for(i=0; i<colunas; i++){
                printf("%f \n", vet2[i]);
                vet1[i] = vet2[i];

            }
        }
        printf("\n--------------------------------------------------------------\n");
        contador++;
    }
    for(i=0; i<linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
    free(vet1);
    free(vet2);
}
*/

//09/05/2025

/*
Matriz quadrada(nxn) com alocacao dinamica, dimensao vem do arquivo de entrada
No arquivo de entrada, além da dimensao, vai ter um vetor 1 de floats de tamanho n
Dois valores float de parâmetros para a montagem da matriz, um deles negativo
A matriz deve ter todos os elementos nulos exceto a diagonal principal e as duas diagonais acima e abaixo dela
Em um arquivo de saida, imprima a matriz, o vetor 1 e o resultado da operação da multiplicacao da matriz pelo vetor 1
A diagonal principal será igual a soma, em valor absoluto, dos demais termos em cada linha (os negativos) + o outro parâmetro fornecido

Arquivo de entrada tem dimensao, vetor, e dois parâmetros
Parâmetros teste
10
-2.0

12	-2 	0 	0 	0
-2 	14 	-2 	0 	0
0 	-2 	14 	-2 	0
0 	0 	-2 	14 	-2
0 	0 	0 	-2 	14
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    FILE *dadosEntrada, *dadosSaida;

    dadosEntrada = fopen("Entrada090525.txt", "rt");
    dadosSaida = fopen("Saida090525.txt", "w+");

    int dimensao, i ,j;
    float num_positivo, num_negativo;
    char texto[50];

    fscanf(dadosEntrada, "%s %d", texto, &dimensao);
    float **matriz = malloc(dimensao*sizeof(float*));
    float *vetor1 = malloc(dimensao*sizeof(float));

    for(i=0; i<dimensao; i++){
        matriz[i] = malloc(dimensao*sizeof(float));
    }
    fscanf(dadosEntrada, "%s", texto);
    //Pegando o vetor de entrada
    for(i=0; i<dimensao; i++){
        fscanf(dadosEntrada, "%f", &vetor1[i]);
    }
    //Pegando os parametros
    fscanf(dadosEntrada, "%s %f %f", texto, &num_positivo, &num_negativo);
    printf("Dimensao: %d\n", dimensao);
    printf("Num Positivo: %f\n", num_positivo);
    printf("Num Negativo: %f\n", num_negativo);
    //Preenchendo a diagonal superior e inferior
    for(i=0; i<dimensao; i++){
        for(j=0; j<dimensao;j++){
            if(j==i+1){
                matriz[i][j] = num_negativo;
            }else if(j==i-1){
                matriz[i][j]= num_negativo;
            }else{
                matriz[i][j]=0;
            }
        }
    }
    //Preenchendo a diagonal principal
    for(i=0; i<dimensao; i++){
        float soma_linha = 0.0;
        for(j=0; j<dimensao; j++){
            soma_linha += fabs(matriz[i][j]);
        }
        matriz[i][i]= num_positivo + soma_linha;
    }

    //Imprimindo os valores utilizados
    printf("Matriz: \n");
    fprintf(dadosSaida, "Matriz: \n");
    for(i=0; i<dimensao; i++){
        for(j=0; j<dimensao; j++){
            printf("%f \t", matriz[i][j]);
            fprintf(dadosSaida, "%f \t", matriz[i][j]);
        }
        printf("\n");
        fprintf(dadosSaida, "\n");
    }

    printf("Vetor:\n");
    fprintf(dadosSaida, "Vetor: \n");
    for(i=0; i<dimensao; i++){
        printf("%f \n", vetor1[i]);
        fprintf(dadosSaida, "%f \n", vetor1[i]);
    }

    //Multiplicacao Matriz Vetor
    printf("Matriz * vetor: \n");
    fprintf(dadosSaida, "Matriz * vetor:\n");
    for(i=0; i<dimensao; i++){
        float soma = 0.0;
        for(j=0; j<dimensao; j++){
            soma+= matriz[i][j]*vetor1[j];
        }
        printf("%f \n", soma);
        fprintf(dadosSaida, "%f \n", soma);
    }

    //Liberando memoria
    for(i=0; i<dimensao; i++){
        free(matriz[i]);
    }
    free(matriz);
    free(vetor1);
    //Fechando os arquivos de entrada
    fclose(dadosEntrada);
    fclose(dadosSaida);
}
*/

//13/05/2025

/*
Serie de Fibonacci
Fatorial

receber x e h de um arquivo de entrada:
	f(x) = [sin(x) + cos(x)]
	implementar uma serie de Taylor, recebendo do arquivo de entrada o numero de termos a ser utilizado
*/
/*
#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>
*/
//Fibonacci
/*
void main(){
    int num_max, i;
    printf("Digite o numero final: ");
    scanf("%d", &num_max);
    int fibonacci[num_max+1];

    for(i=0;i<=num_max;i++){
        if(i==0){
            fibonacci[i]=1;
        }else if(i==1){
            fibonacci[i] =1;
        }else{
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
        printf("Fibonacci de %d: %d\n", i, fibonacci[i]);
    }
    printf("Resultado final: %d", fibonacci[num_max]);
}
*/

//Fatorial
/*
void main(){
    int num, i;
    printf("Qual numero deseja calcular o fatorial: ");
    scanf("%d", &num);
    int fatorial = 1;
    for(i=0; i<=num;i++){
        if(i==0){
            fatorial*=1;
        }else{
            fatorial *= i;
        }
        printf("Fatorial de %d: %d\n", i, fatorial);
    }
}
*/

//Serie de Taylor f(x) = [sin(x) + cos(x)] (x e h de um arquivo de entrada)
/*
void main(){
    FILE *dadosEntrada;
    dadosEntrada = fopen("taylorEntrada.txt", "rt");

    float x,h;
    int qtd_termos, i;
    char texto[50];
    fscanf(dadosEntrada, "%s %f", texto, &x);
    fscanf(dadosEntrada, "%s %f", texto, &h);
    fscanf(dadosEntrada, "%s %d", texto, &qtd_termos);

    printf("x: %f\n", x);
    printf("h: %f\n", h);
    printf("Termos: %d\n", qtd_termos);

    float taylor = sin(x) + cos(x);
    int fatorial = 1;
    int d=0;
    float dx;
    for(i=1; i<=qtd_termos; i++){
        if(i==0){
            fatorial*=1;
        }else{
            fatorial *= i;
        }
        dx = pow(h,i);

        if(d==0){
            taylor+=((cos(x)-sin(x))*dx)/(fatorial);
            printf("d: %d\n", d);
            printf(" ([cos(x)-sin(x)]*%f)/(%d)\n", dx, fatorial);
            printf("-----------------------------------------------\n");
            d++;
        }else if(d==1){
            taylor+= ((-sin(x)-cos(x))*dx)/(fatorial);
            printf("d: %d\n", d);
            printf(" ([-sin(x)-cos(x)]*%f)/(%d)\n", dx, fatorial);
            printf("-----------------------------------------------\n");
            d++;
        }
        else if(d==2){
            taylor+= ((-cos(x)+sin(x))*dx)/(fatorial);
            printf("d: %d\n", d);
            printf(" ([-cos(x)+sin(x)]*%f)/(%d)\n", dx, fatorial);
            printf("-----------------------------------------------\n");
            d++;
        }else if(d==3){
            taylor+= ((sin(x)+cos(x))*dx)/(fatorial);
            printf("d: %d\n", d);
            printf(" ([sin(x)+cos(x)]*%f)/(%d)\n", dx, fatorial);
            printf("-----------------------------------------------\n");
            d=0;
        }

    }
    printf("A soma final de Taylor eh: %f", taylor);


    fclose(dadosEntrada);
}
*/

//Integracao pela regra do trapezio

#include<stdio.h>
#include<math.h>
#include<complex.h>
#include<stdlib.h>
#include<string.h>

void main(){
    FILE *dadosEntrada;
    dadosEntrada = fopen("integracaoTrapezioDados.txt", "rt");

    float a, b, c, dx, i;
    printf("Digite os coeficientes da eq. de segundo grau (a*x^2 + b*x +c):\n");
    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    float int_sup, int_inf;
    int n;
    char texto[50];

    fscanf(dadosEntrada, "%s %f", texto, &int_inf);
    fscanf(dadosEntrada, "%s %f", texto, &int_sup);
    fscanf(dadosEntrada, "%s %d", texto, &n);
    dx = (int_sup-int_inf)/n;

    float sum =0.0;
    int d =0;

    for(i=int_inf; i<int_sup; i=i+dx){
        sum += (a*(pow(i+ (dx/2),2)) + b*(i + (dx/2)) +c)*dx ;
        printf("Iteracao %d:\nSoma: %f", d+1, sum);
        printf("\n-------------------------------------------------\n");
        d++;
    }
    printf("Resultado da integral: %f", sum);
    fclose(dadosEntrada);
}
