//Quais serão os valores de x, y e p ao final do trecho de código abaixo:
#include <stdint.h>

int main(){
	int x, y;
	int *p;
	y = 0;  // O valor de y inicialmente sera zero.
	p = &y;  // p recebe o endereco da variavel y.
	x = *p; // x recebe o valor do endereco, para onde y aponta, ou seja, y.
	x = 4;  // x recebe o valor 4.
	(*p)++; // Incrementando o valor no endereco para que p aponta; *p = 0 + 1.
	--x;    // Decremento no valor de x = 4 - 1 = 3.
	(*p) = (*p) + x; // Somando o valor de x com o valor presente no endereco p; (*p) = 1 + 3.
	
	printf("\n%i\n", x);
	printf("\n%i\n", y);
	printf("\n%i\n", *p);
	
} // O valor de x, y, e p serao 3, 4 e 4 consecutivamente.