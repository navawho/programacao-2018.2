#include <stdio.h>
#include <stdlib.h>

//Questão 11 da lista 3

int main(){
	printf("Digite o número de linhas da matriz: ");
	int m, i, j, numero;
	scanf("%d", &m);
	printf("Digite o número de colunas da matriz: ");
	int n;
	scanf("%d", &n);
	int A[m][n]; //Matriz.
	int V[n]; //Vetor para o produto.
	int R[n]; //Vetor que reberá resultado.

	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("Digite o inteiro da linha %d e coluna %d: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}

	for (j = 0; j < n; j++){
		printf("Digite o termo %d do vetor a ser multiplicado: ", j);
		scanf("%d", &V[j]);
	}

	//Gerando resultado:
	for (i = 0; i < m; i++){
		R[i] = 0;
		for (j = 0; j < n; j++){
			R[i] += V[j]*A[i][j];		
			/*Cada linha X do vetor R recebe o somatório da linha X
			do vetor V sendo multiplicada por todos os valores das
			colunas da matriz na linha X.
			*/
		}
	}

	printf("Resultado:");
	for (j = 0; j < n; j++){
		printf(" %d|", R[j]);
	}

	printf("\n");
	return 0;
}

