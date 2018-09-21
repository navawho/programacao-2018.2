#include <stdio.h>
#include <stdlib.h>

int aumentar_vet(int *vetor, int aumento, int tamanho);

int add_novo_vet(int *vetor,int tamanho,int aumento);

int main(void){

	int tamanho,aumento, i, sair = 1;

	printf("Digite o tamanho do vetor : ");
	scanf("%d", &tamanho);

	int *vet = malloc(tamanho*sizeof(int));

	for (i = 0; i < tamanho; ++i){
		printf("Digite a posicao %d do vetor :\n", i+1 );
		scanf("%d", &vet[i]);
	}

	printf("Voce quer add mais itens S(1)/N(0) :\n");
	scanf("%d", &sair);

	while(sair == 1){
		printf("Quantos elementos voce quer adicionar? \n");
		scanf("%d", &aumento);

		*vet = aumentar_vet(vet, aumento, tamanho);
		*vet = add_novo_vet(vet, tamanho, aumento);

		printf("Voce quer add mais itens S(1)/N(0)\n");
		scanf("%d",&sair);

		tamanho += aumento;		
	}

	for (i = 0; i<tamanho; ++i){
		printf("%d",vet[i] );

	}
	printf("\n");
	free(vet);
	return 0;
}

int aumentar_vet(int *vetor, int aumento, int tamanho){
	int i;
	int *aux = vetor;
	vetor = malloc((tamanho+aumento)*sizeof(int));
	for (i = 0; i < tamanho; ++i ){
		vetor[i] = aux[i];
	}
	return *vetor;
}

int add_novo_vet(int *vetor, int tamanho, int aumento){
	int k, new_indice = aumento;
	for (k = tamanho; k < (aumento+tamanho); ++k){
		printf("Digite a posicao %d do vetor :\n", k+1 );
		scanf("%d", &vetor[k]);
	}
	return *vetor;
}
