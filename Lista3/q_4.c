#include <stdio.h>

int prod_escalar();

int main(void){

	int vetA[10], vetB[10], i;

	for (i=0; i<10; ++i){
		printf("Digite o valor inteiro da posicao %d do vetor 1\n",i+1 );
		scanf("%d", &vetA[i]);
	}

	for (i=0; i<10; ++i){
		printf("Digite o valor inteiro da posicao %d do vetor 2\n",i+1 );
		scanf("%d", &vetB[i]);
	}

	printf("O resultado eh => %d \n", prod_escalar(vetA, vetB));

	return 0;
}


int prod_escalar(int *vetor1,int *vetor2){
	int resultado, j;
	resultado = 0;
	for (j=0; j<10; ++j){
		printf("O vetA posicao %d => %d \n", j+1, vetor1[j] );
		resultado += vetor1[j]*vetor2[j];
	}
	return resultado;
}


