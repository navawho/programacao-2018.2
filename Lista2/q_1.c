#include <stdio.h>

int divisao(int x, int y) {	
	int resto = x%y;
	return resto;
}

int main(){
	int num1, num2, Mdc;
	printf("Escreva dois numeros inteiros positivos: \n");
	scanf("%d %d", &num1, &num2);

	do {
		if (divisao(num1, num2) == 0){
			Mdc = num2;
		}
		else {
			Mdc = divisao(num1, num2);
			num1 = num2;
			num2 = Mdc;
		}

	} while (divisao(num1, num2) != 0 );
	
	printf("%d -> Mdc \n", Mdc);
return 0;
}