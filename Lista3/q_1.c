#include <stdio.h>

int main(void)
{
int a[5];
int b[8];
printf("Entre os valores do vetor a:\n");
for (int i = 0; i < 4; ++i)
{
	int x;
	scanf("%d\n",&x);
	a[i] = x;
}
printf("Entre os valores do vetor b:\n");
for (int i = 0; i < 7; ++i)
{
	int x;
	scanf("%d\n",&x);
	b[i] = x;
}
printf("Valores repetidos:\n");
for (int c = 0; c < 7; ++c)
{
	for (int i = 0; i < 4; ++i)
	{
		if (b[c] == a[i])
		{
			printf("%d\n", b[c]);
		}
	}
}


	return 0;
}