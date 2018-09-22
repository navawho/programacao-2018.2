#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Questão 14 da lista 3

int tamanho (char *string);
void troca(char *string);
int ocorrencia(char *string, char caractere);
void removeS(char *string, char caractere); //mudado nome da função pois já existe uma função remove no sistema do C
void titulo(char *string);
void inverte(char *string);

int main (){
	char *string = (char *) malloc(81*sizeof(char)); //Alocando espaço na memória:
	printf("Digite a string a ser analisada:\n");
	scanf(" %[^\n]", string);

	troca(string);

	printf("Função troca:\n%s\n", string);
	troca(string); //Destrocando.

	titulo(string);
	printf("Função título:\n%s\n", string);

	inverte(string);
	printf("Função invert:\n%s\n", string);
	inverte(string); //Desfazendo inversão.

	char caract;
	printf("Entre um caractere para função ocorrência: ");

	scanf(" %c", &caract); //Espaço no 'scanf' = máscara, ignora possível espaços antes do caractere e evita erros de leitura.
	printf("O correncia de '%c' na string = %d\n", caract, ocorrencia(string, caract));

	printf("Entre um caractere para função remove: ");
	scanf(" %c", &caract);
	removeS(string, caract);
	printf("Removendo '%c' da string:\n%s\n", caract, string);

	free(string);//Liberando espaço alocado.
	return 0;
}


/*Função auxilizar:
Conta os caracteres no vetor até encontrar código de parada ('/0')*/
int tamanho (char *string){
	int i = 0;
	while (string[i] != '\0'){
		i++;
	}
	return i;
}

void troca(char *string){
	int i = 0;

	while(string[i] != '\0'){
		if (string[i] >= 65 && string[i] <= 90){
			string[i] += 32;
		} else if (string[i] >= 97 && string[i] <= 122){
			string[i] -= 32;
		}

		i++;
	}
	/*Considerando propriedade dos valores numéricos dos caracteres no C
	baseado na tabela ASCII
	65 = 'A' ... 90 = 'Z'
	97 = a ... 32 = 'z'
	*/

}

int ocorrencia(char *string, char caractere){
	int i = 0, n = 0;

	while(string[i] != '\0'){
		if(caractere == string[i]){
			n++;
		}
		i++;
	}

	return n;
}

void removeS(char *string, char caractere){
	int i = 0, n = tamanho(string), j;

	while(string[i] != '\0'){
		if (string[i] == caractere){

			for (j = i; j < n; j++){
				string[j] = string[j+1];
			}
		}
		i++;
	}

}

void titulo(char *string){
	int i = 0;

	if (string[i] >= 97 && string[i] <= 122){
		string[i] -= 32;
	}

	while (string[i] != '\0'){
		if (string[i] == ' '){
			if (string[i+1] >= 97 && string[i+1] <= 122){
				string[i+1] -= 32;
			}
		}
		i++;
	}

}

void inverte(char *string){
	int n = tamanho(string);
	char temp;

	for (int i = 0; i < n; i++){
		temp = string[i];
		string[i] = string[n-1];
		string[n-1] = temp;
		n--;
	}
}
