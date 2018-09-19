#include <stdio.h>

int repetido();

int main(void){

	int a[5], b[8], i, j;

	for (int i = 0; i < 5; ++i)
	{
		printf("Entre o valor da posicao %d vetor 1:\n", i+1);
		scanf("%d\n",&a[i]);
		
	}

	for (int i = 0; i < 8; ++i)
	{
		printf("Entre o valor da posicao %d do vetor 2:\n", i+1);
		scanf("%d\n",&b[i]);

	}

	for (i=0; i<8; ++i){
		for (j=0; j<5; ++j){
			if(b[i]==a[j]){
				printf("O valor %d estar repetido nos vetores\n", b[i]);
			}
		}

	}


	return 0;
		
}