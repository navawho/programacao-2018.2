#include <stdio.h>
#include <stdlib.h>

int** alocar_matriz(int Linha, int Coluna);


int main(void){

	int M, N, **mat, numero, contador = 0 ; 

	printf("Digite os tamanho da matriz MxN (com espaço entre eles): \n");
	scanf("%d %d", &M, &N);

	mat = alocar_matriz(M, N);

	for (int i = 0; i < M; ++i){
		for (int j = 0; j < N; ++j){
			printf("Escreva o valor da Linha: %d ; e da Coluna: %d =>\n", i+1 , j+1);
			scanf("%d", &mat[i][j]);
		}
	}

	printf("A matriz foi preenchida\nDigite um numero => ");
	scanf("%d", &numero);

	for (int i = 0; i < M; ++i )	{
		for (int j = 0; j < N; ++j){
			if (numero == mat[i][j]){
				contador +=1;
			}
		}
	}

	printf("O numero %d foi repetido %d vezes\n",numero, contador );

	return 0;
}

int** alocar_matriz(int Linha, int Coluna){
	int **matriz = (int**)malloc(Linha+sizeof(int*));
	
	int i, j;
	for (i = 0; i < Linha; ++i){
		matriz[i] = (int*)malloc(Coluna*sizeof(int));
	}
	return matriz;
}
