#include<stdio.h>
#include<math.h>
#include<string.h>
#include<complex.h>

void main(){
    float a,b,c,d;
    float potencia;
    printf("Digite quatro numeros: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("\nPrimeiro numero: %f", a);
    printf("\nSegundo numero: %f", b);
    printf("\nTerceiro numero: %f", c);
    printf("\nQuarto numero: %f", d);
    printf("\nDigite a qual potencia deseja elevar o numero a\n");
    scanf("%f", &potencia);
    printf("\nPotencia: %f", potencia);
    printf("\n a^%f: %f", potencia ,pow(a,potencia));
}
