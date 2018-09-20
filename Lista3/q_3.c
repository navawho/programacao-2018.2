#include <stdio.h>

void melhor_tempo(int v[n], int n);
void melhor_volta(int v[n], int n);
void pior_tempo(int v[n], int n);
void pior_volta(int v[n], int n);
void tempo_medio(int v[n], int n);

int main(void)
{
	int n;
	printf("Digite a quantidade de voltas: \n");
	scanf("%d",&n);
	int v[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Digite o tempo da volta %d:", i+1);
		scanf("%d", &v[i]);
	}
	printf("Melhor tempo:\n");
	melhor_tempo(v[n], n);

	printf("Melhor volta:\n");
	melhor_volta(v[n], n);

	printf("Pior tempo:\n");
	pior_tempo(v[n], n);

	printf("Pior volta:\n");
	pior_volta(v[n], n);

	printf("Tempo médio:\n");
	tempo_medio(v[n], n);

	return 0;
}

void melhor_tempo(v[n], n)
{
	int melhor_tempo = v[0];
	for (int i = 0; i < n-1; ++i)
	{
		if (v[i+1]>v[i])
		{
			melhor_tempo = v[i+1];
		}
	}
	printf("%d\n",melhor_tempo);
}

void melhor_volta(v[n], n)
{
	int melhor_volta = v[0];
	for (int i = 0; i < n-1; ++i)
	{
		if (v[i+1]>v[i])
		{
			melhor_volta = i+1;
		}
	}
	printf("%d\n",melhor_tempo);
}

void pior_tempo(v[n, n])
{
	int pior_tempo = v[0];
	for (int i = 0; i < n-1; ++i)
	{
		if (v[i+1]<v[i])
		{
			pior_tempo = v[i+1];
		}
	}
	printf("%d\n",pior_tempo);
}

void pior_volta(v[n, n])
{
	int pior_volta = v[0];
	for (int i = 0; i < n-1; ++i)
	{
		if (v[i+1]<v[i])
		{
			pior_volta = i+1;
		}
	}
	printf("%d\n",pior_volta);
}

void tempo_medio(v[n], n)
{
	int tempo_medio;
	int soma_voltas = 0;
	for (int i = 0; i < n; ++i)
	{
		soma_voltas = soma_voltas + v[i];
	}
	tempo_medio = soma_voltas/n;
}
