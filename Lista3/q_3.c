#include <stdio.h>

void melhor_tempo(v[n], int n);

int main(void)
{
	int n;
	printf("Digite a quantidade de voltas: \n");
	scanf("%d",&n);
	int v[n];
	for (int i = 0; i < n; ++i)
	{
		printf("Digite o tempo da volta %d", i+1);
		scanf("%d", &v[i]);
	}
	melhor_tempo(v[n], n);

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