#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int D, d, r;
	float q;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Insira o valor do Dividendo: ");
	scanf("%d", &D);
	printf("Insira o valor do Divisor: ");
	scanf("%d", &d);
	q = (float) D / d;
	printf("O Quociente da divisão de %d por %d é: %.1f\n", D, d, q);
	r = D % d;
	printf("O Resto da divisão de %d por %d é: %d", D, d, r);
	return 0;
}
