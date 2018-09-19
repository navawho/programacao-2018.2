#include <stdio.h>

int melhor_tempo(v[n]);

int main(void)
{
	int n;
	printf("Digite a quantidade de voltas: \n");
	scanf("%d",&n);
	int v[n];
	for (int i = 0; i < n-1; ++i)
	{
		printf("Digite o tempo da volta %d", i+1);
		scanf("%d", &v[i]);
	}
	melhor_tempo(v[n]);
	return 0;
}

int melhor_tempo(v[n])
{
	for (int i = 0; i < n-2; ++i)
	{
		int melhor_tempo;
		if (v[i]>v[i+1])
		{
			melhor_tempo = v[i];
		}
	}
	printf("%d\n",melhor_tempo);
}