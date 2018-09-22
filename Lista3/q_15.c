#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Questão 15 da lista 3

void inverte(char *string);
int tamanho(char *string);
int checkPal(char *string, char *espelho);

int main (){
	char *espelho = (char *) malloc(81*sizeof(char));
	char *string = (char *) malloc(81*sizeof(char));
	printf("Digite a string a ser analisada: \n");
	scanf(" %[^\n]", string);
	int i = 0;
	while(string[i] != '\0'){
		espelho[i] = string[i];
		i++;
	}
	
	inverte(espelho);
	if(checkPal(string, espelho) == 1){
		printf("Essa string é um Palíndromo!\n");
	} else {
		printf("Essa string não é um Palíndromo!\n");
	}

	free(espelho);
	free(string);
	return 0;

}

int tamanho(char *string){
	int i = 0;
	while (string[i] != '\0'){
		i++;
	}
	return i;
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

int checkPal(char *string, char *espelho){
	int n = tamanho(string);
	for (int i = 0; i < n; i++){
		if(string[i] != espelho[i]){
			return 0;
		}
	}
	return 1;
}
