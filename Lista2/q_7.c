#include <stdio.h>
#include <math.h>

double pot (double x, int k);

int main(void){
	double num, lot;
	int exp;

	printf("Digite um numero double\n");
	scanf("%lf", &num);

	printf("Digite um valor inteiro para o expoente\n");
	scanf("%d", &exp);

	lot = pow(num, exp);
	printf("Utilizando a biblioteca math.h => %lf \n", lot=pow(num, exp));
	printf("Utilizando a funcao pot => %lf \n", pot(num, exp));

	if (pot(num, exp) == pow(num, exp)){
		printf("Deu certo\n");
	}

	else {
		printf("Tente dnv\n");
	}

	return 0;
}

double pot (double x, int k){	
	if ( k == 1){
		
		return x;

	}
	else {
		x = x*(pot( x, k-1 ) );
		
	}
}




