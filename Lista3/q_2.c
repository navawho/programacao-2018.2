#include <stdio.h>

int max(int *vetor);
int min(int *vetor);

int main(void)
{
	int vet[10];
	int i;

	for (i = 0; i<10; ++i){
		printf("Digite o valor da posicao %d do vetor: \n", i+1 );
		scanf("%d", &vet[i]);

	}
	printf("O valor Minimo => %d\n",min(vet) );
	printf("O valor Maximo => %d\n",max(vet) );

	return 0;
}

int max(int *vetor){
	int maximo, i;
	maximo = 0; 
	for (i = -1; i<9; ++i){
		if (maximo>vetor[i+1]){
			maximo = maximo;
		}
		else{
			maximo = vetor[i+1];
		}
	}
	return maximo;
}

int min(int *vetor){
	int minimo, i; 
	minimo = 0;
	for (i = -1; i<9; ++i){
		if (minimo<vetor[i+1]){
			minimo = minimo;
		}
		else{
			minimo = vetor[i+1];
		}
	}
	return minimo;
}




