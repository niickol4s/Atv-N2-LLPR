#include <stdio.h>

int dobro(int number) {
	int dobro;
	dobro = (2 * number);
	return dobro;
}

int main () {
	int n;
	int d;
	
	printf("\nInsira o valor: ");
	scanf("%d",&n);
	
	d = dobro(n);
	
	printf("\nO dobro do valor: %d", d);
	
	return 0;
}
