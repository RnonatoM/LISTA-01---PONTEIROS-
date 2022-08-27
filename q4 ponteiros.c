/*Crie um programa para calcular a �rea e o per�metro de um hex�gono. O seu programa
deve implementar uma fun��o chamada calcula_hexagono que calcule a �rea e o
per�metro de um hex�gono regular de lado l. A fun��o deve obedecer ao seguinte
prot�tipo: void calcula_hexagono(float l, float *area, float *perimetro); A �rea e o
per�metro de um hex�gono regular s�o dados, respectivamente, por:

Para os c�lculos, utilize as fun��es sqrt e pow da biblioteca math.h. Em seguida, crie a
fun��o principal do programa e utilize a fun��o calcula_hexagono para calcular a �rea e
o per�metro de um hex�gono de lado l informado pelo usu�rio*/

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
  printf("\n\na area e o per�metro do hexagono regular de lado %f e igual a %f  e  %f", lado, area, perimetro);

  printf("\n\nDigite o lado do hexagono:");
  scanf("%f", &lado);

 }
}