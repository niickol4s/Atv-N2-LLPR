#include <stdio.h>
#include <locale.h>

int maior(int number1, int number2) {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int dobro;
	
	if(number1 > number2) {
		printf("\nO maior valor é: %d", number1);
	} else if(number2 > number1) {
		printf("\nO maior valor é: %d", number2);
	}
	
	return 0;
}

int main() {
	int number1;
	int number2;
	
	printf("\nInsira o primeiro valor: ");
	scanf("%d", &number1);
	
	printf("\nInsira o segundo valor: ");
	scanf("%d", &number2);
	
	maior(number1, number2);
	
	return 1;
}
