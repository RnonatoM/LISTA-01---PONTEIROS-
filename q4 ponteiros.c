/*Crie um programa para calcular a área e o perímetro de um hexágono. O seu programa
deve implementar uma função chamada calcula_hexagono que calcule a área e o
perímetro de um hexágono regular de lado l. A função deve obedecer ao seguinte
protótipo: void calcula_hexagono(float l, float *area, float *perimetro); A área e o
perímetro de um hexágono regular são dados, respectivamente, por:

Para os cálculos, utilize as funções sqrt e pow da biblioteca math.h. Em seguida, crie a
função principal do programa e utilize a função calcula_hexagono para calcular a área e
o perímetro de um hexágono de lado l informado pelo usuário*/

#include<stdio.h>
#include<math.h>

void calc_hexa(float l, float *area, float *per) {

*per = 6 * l;
*area = (3 * pow(l,2) * sqrt(3))/2;
}

int main(){
 float lado, area, perimetro;

 printf("\nDigite o lado do hexagono:");
 scanf("%f", &lado);
 while (lado > 0) {
  calc_hexa(lado, &area, &perimetro);
  printf("\n\na area e o perímetro do hexagono regular de lado %f e igual a %f  e  %f", lado, area, perimetro);

  printf("\n\nDigite o lado do hexagono:");
  scanf("%f", &lado);

 }
}