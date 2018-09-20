#include <stdio.h>
#include <math.h>

int calc(int *vetor);


int main(void){

	int i, seq1[8], seq2[8], val1, val2;

	for (i = 0; i<8; ++i){
		printf("Digite o valor da posicao %d do numero: \n", i+1);
		scanf("%d",&seq1[i]);
	}
	for (i = 0; i<8; ++i){
		printf("Digite o valor da posicao %d do numero: \n", i+1);
		scanf("%d",&seq2[i]);
	}

	printf("O valor da soma eh => %d\n", calc(seq1)+calc(seq2));

	return 0;
}

int calc(int *vetor){
	int res=0, i;
	for (i = 0; i<8; ++i){
		res += vetor[7-i]*(pow(10,i));
	}
	return res;
}
