#include <stdio.h>
#include <stdlib.h>

//Questão 13 da lista 3

int verificaItem (char item);
void resultado (int matr, char *resps, char *gabarito);

int main (){
	int matr1, matr2, matr3, i;
	char *gabarito = (char *) malloc(10*sizeof(char)); //Alocando 10 espaços de inteiros da memória para vetor com gabarito
	char *resps1 = (char *) malloc(10*sizeof(char)); //Alocando 10 espaços de inteiros da memória para vetor com respostas:
	char *resps2 = (char *) malloc(10*sizeof(char));
	char *resps3 = (char *) malloc(10*sizeof(char));

	//Preenchendo gabarito:
	for (i = 0; i < 10; i++){
		printf("Digite o item (a, b, c, d, ou e) da questão %d: ", i + 1);
		scanf("%c", &gabarito[i]);
		getchar(); //Função para evitar que próximo 'scanf' pegue '\n' (mesma função da 'máscara').

		while (verificaItem(gabarito[i]) == 1){
			printf("Alternativa invalida, digite o item novamente (a, b, c, d ou e): ");
			scanf("%c", &gabarito[i]);
			getchar();
		}
	}

	printf("Digite a matriculo do primeiro aluno: ");
	scanf("%d", &matr1);
	getchar();

	for (i = 0; i < 10; i++){
		printf("Digite a resposta do aluno %d para a questão %d: ", matr1, i + 1);
		scanf("%c", &resps1[i]);
		getchar();
		
		//Verificando entrada de item:
		while (verificaItem(resps1[i]) == 1){
			printf("Alternativa invalida, digite o item novamente (a, b, c, d ou e): ");
			scanf("%c", &resps1[i]);
			getchar();
		}
	}


	//Repetindo processo para mais dois alunos...
/*	printf("Digite a matriculo do segundo aluno: ");
	scanf("%d", &matr2);

	for (i = 0; i < 10; i++){
		printf("Digite a resposta do aluno %d para a questão %d: ", matr2, i + 1);
		scanf("%c", &resps2[i]);
		getchar();

		while (verificaItem(resps2[i]) == 1){
			printf("Alternativa invalida, digite o item novamente (a, b, c, d ou e): ");
			scanf("%c", &resps2[i]);
			getchar();
		}
	}

	printf("Digite a matriculo do terceiro aluno: ");
	scanf("%d", &matr3);

	for (i = 0; i < 10; i++){
		printf("Digite a resposta do aluno %d para a questão %d: ", matr3, i + 1);
		scanf("%c", &resps3[i]);
		getchar();

		while (verificaItem(resps3[i]) == 1){
			printf("Alternativa invalida, digite o item novamente (a, b, c, d ou e): ");
			scanf("%c", &resps3[i]);
			getchar();
		}
	}
*/
	resultado (matr1, resps1, gabarito);
/*
	resultado (matr2, resps1, gabarito);
	resultado (matr3, resps1, gabarito);
*/

	//Liberando espaços alocandos na memória:
	free(resps1);
	free(resps2);
	free(resps3);
	free(gabarito);
	return 0;
}


//Função para verificar se entrada de item é válida:
int verificaItem (char item){
	if (item == 'a'){
		return 0;
	} else if (item == 'b'){
		return 0;
	} else if (item == 'c'){
		return 0;
	} else if (item == 'd'){
		return 0;
	} else if (item == 'e'){
		return 0;
	} else {
		return 1;
	}
}

void resultado (int matr, char *resps, char *gabarito){
	int acertos = 0;

	printf("\nAluno: %d\n", matr);
	printf("Respostas: ");

	for (int i = 0; i < 10; i++){
		printf("Q%d - %c  ", i + 1, resps[i]);

		if(resps[i] == gabarito[i]){
			acertos++;
		}
	}

	printf("\nAcertos: %d\n", acertos);

	if (acertos >= 7){
		printf("Aprovado! \n");
	} else {
		printf("Reprovado! \n");
	}
}
