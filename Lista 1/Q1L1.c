//Codigo para a primeira questao da primeira lista de exercicios

//Escrever um programa para converter uma quantidade de dias em anos, semanas e dias (desconsidere a ocorrência de ano bissexto).

#include<stdio.h>
#include<string.h>
#include<complex.h>
#include<math.h>

void main(){
    int dias_terminal, anos, semanas, dias_final;

    printf("Digite o numero de dias\n");
    scanf("%d", &dias_terminal);


    anos = dias_terminal/365;
    semanas = (dias_terminal%365)/7;
    dias_final = (dias_terminal%365)%7;

    printf(" %d anos, %d semanas e %d dias.", anos, semanas, dias_final);
}
