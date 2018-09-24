#include <stdlib.h>
#include <stdio.h>

int** alocar_matriz(int Linha, int Coluna);



int main (void){

	int **matriz, M, N, alfa, i, j, valor;

	printf("Digite os tamanho da matriz MxN (com espaço entre eles): \n");
	scanf("%d %d", &M, &N);

	matriz = alocar_matriz(M, N);

	for (i = 0; i < M; ++i){
		for (j = 0; j < N; ++j){
			printf("Escreva o valor da posicao: %d x %d =>\n", i+1 , j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("Digite um numero para multiplicar a matriz\n");
	scanf("%d", &alfa);

	for(i = 0; i < M; ++i){
		for( j = 0; j < N; ++j){
			valor = alfa*matriz[i][j];
			printf("%d ",valor);
		}
		printf("\n");
	}

	free(matriz);
}

int** alocar_matriz(int Linha, int Coluna){
	int **matriz = (int**)malloc(Linha*sizeof(int*));
	int i;
	for (i = 0; i < Linha; ++i){
		matriz[i] = (int*)malloc(Coluna*sizeof(int));
	}
	return matriz;
}

