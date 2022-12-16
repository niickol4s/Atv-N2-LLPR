#include <stdio.h>

int dobro(int number1, int number2) {
	int dobro;
	
	if(number1 > number2) {
		dobro = (2 * number1);
	} else if(number2 > number1) {
		dobro = (2 * number2);
	}
	
	printf("\nO dobro do maior valor: %d", dobro);
	
	return 0;
}

int main() {
	int number1;
	int number2;
	
	printf("\nInsira o primeiro valor: ");
	scanf("%d", &number1);
	
	printf("\nInsira o segundo valor: ");
	scanf("%d", &number2);
	
	dobro(number1, number2);
	
	return 1;
}
