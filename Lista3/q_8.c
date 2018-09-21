#include <stdio.h>
#include <stdlib.h>

int buscar(int numero, int *sequencia, int n);
void troca(int *x, int *y);
void ordena(int *sequencia, int n);

int main(void)
{
	int n;
	printf("Digite a quantidade de termos da sequencia\n");
	scanf("%d", &n);
	int *sequencia = (int*)malloc(n*sizeof(int));
	if(sequencia==NULL)
	{
		printf("Memoria insuficiente");
		return 1;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("Digite o valor do termo %d:", i+1);
		scanf("%d", &sequencia[i]);
	}
	int numero;
	printf("Insira o numero a ser pesquisado\n");
	scanf("%d", &numero);
	int verif = buscar(numero, sequencia, n);
	verif==-1?printf("O numero nao encontra-se na sequencia\n"):printf("O numero encontra-se no indice %d\n", verif);
	printf("Sequencia antes de ser ordenada:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",sequencia[i] );
	}
	ordena(sequencia,n);
	printf("Sequencia depois de ser ordenada:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d\n",sequencia[i] );
	}
	

}

int buscar(int numero, int *sequencia, int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (numero == sequencia[i])
		{
			return i+1;
		}
	}
	return -1;
}

void troca(int *x, int *y)
{
	int aux = *x;
	*x = *y;
	*y = aux;
}

void ordena(int *sequencia, int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		for (int i = 0; i < n-1; ++i)
		{
		if (sequencia[i+1]<sequencia[i])
		{
			troca(&sequencia[i], &sequencia[i+1]);
		}
		}
	}
}