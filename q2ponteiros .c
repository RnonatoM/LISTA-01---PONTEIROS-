//Considere o trecho de código abaixo:

#include <stdio.h>
#include <stdlib.h>
int main(void){
	intx, *p;
	x = 100;
	p = x;
	printf("valor de p = %p\tvalor de *p = %d", p, *p);
}
/* (a) Sim.
   (b) No codigo esta sendo usado aspas a esquerda dentro do printf, mas para
   sinalizar  texto dentro da funcao utilizamos aspas a direita.
   (c) Não.
   (d) Sim, porem houve uma advertencia. 
*/