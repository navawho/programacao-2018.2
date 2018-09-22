#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Questão 16 da lista 3

int tamanho(char *string);
int ocorrencia(char *frase, char *palavra);
int nocorrencias(char *frase, char *palavra);
int pocorrencia(char *frase, char *palavra);
void removeS(char *frase, char *palavra);
void insercao(char *frase, char *palavra, int pos);
void subsitui(char *frase, char *palavra, char *nova);

int main(){
	char *frase = (char *) malloc(81*sizeof(char));
	char *analise = (char *) malloc(81*sizeof(char));
	char *analise2 = (char *) malloc(81*sizeof(char));

	printf("Digite uma frase para teste das funções:\n");
	scanf(" %[^\n]", frase);

	printf("Digite uma nova string para analise na função 'ocorrencia':\n");
	scanf(" %[^\n]", analise);
	printf("Resultado = %d\n", ocorrencia(frase, analise));

	printf("Digite uma nova string para analise na função 'nocorrencias':\n");
	scanf(" %[^\n]", analise);
	printf("Resultado = %d\n", nocorrencias(frase, analise));

	printf("Digite uma nova string para analise na função 'pocorrencia':\n");
	scanf(" %[^\n]", analise);
	printf("Resultado = %d\n", pocorrencia(frase, analise));

	printf("Digite uma nova string para ser removida da frase com a função 'remove' \n(lembre-se de acrescentar 'espaço'):\n");
	scanf(" %[^\n]", analise);
	removeS(frase, analise);
	printf("Nova frase:\n%s\n", frase);

	printf("Digite uma nova string para ser inserida na frase com a função 'insercao' \n(lembre-se de acrescentar 'espaço'):\n");
	scanf(" %[^\n]", analise);
	int p;
	printf("Digite a posição (do vetor) em que a palavra será inserida: ");
	scanf("%d", &p);
	insercao(frase, analise, p);
	printf("Nova frase:\n%s\n", frase);

	printf("Digite uma string da frase para ser substituida com a função 'subsitui':\n");
	scanf(" %[^\n]", analise);
	printf("Digite a nova string que substituirá a string anterior:\n(Não entre a mesma palavra, isso gerará um loop):\n");
	scanf(" %[^\n]", analise2);
	subsitui(frase, analise, analise2);
	printf("Nova frase:\n%s\n", frase);

	free(frase);
	free(analise);
	free(analise2);
	return 0;
}

int tamanho(char *string){
    int i = 0;
    while (string[i] != '\0'){
        i++;
    }
    return i;
}

int ocorrencia(char *frase, char *palavra){
    int i = 0, j = 0, n = tamanho(palavra);
    while (frase[i] != '\0' && j < n){
        if (frase[i] == palavra[j]){
            j++;
            if (j == n){
                return 1;
            }
        } else {
            j = 0;
        }
    i++;
    }
    return 0;
}

int nocorrencias(char *frase, char *palavra){
    int i = 0, j = 0, n = tamanho(palavra), result = 0;
    while (frase[i] != '\0'){
        if (frase[i] == palavra[j]){
            j++;
            if (j == n){
                result ++;
            }
        } else {
            j = 0;
        }
    i++;
    }
    return result;
}

int pocorrencia(char *frase, char *palavra){
    int i = 0, j = 0, n = tamanho(palavra);
    while (frase[i] != '\0' && j < n){
        if (frase[i] == palavra[j]){
            j++;
            if (j == n){
                return (i - n);
            }
        } else {
            j = 0;
        }
    i++;
    }
    return 0;
}

void removeS(char *frase, char *palavra){
	int i, n = tamanho(frase), m = tamanho(palavra), pos;

	while(pocorrencia(frase, palavra) != 0){
		pos = pocorrencia(frase, palavra) + 1;

		for (i = pos; i < n; i++){
			frase[i] = frase[i + m];
		}

	}
}

void insercao(char *frase, char *palavra, int pos){
	int m = tamanho(frase), n = tamanho(palavra), i, j = 0;

	for (i = m; i >= pos; i--){
		frase[i + n] = frase[i];
	}

	for (i = pos; i < pos + n; i++){
		if(palavra[j] != '\0'){
			frase[i] = palavra[j];
		}

		j++;
	}
}


void subsitui(char *frase, char *palavra, char *nova){
	int i, n = tamanho(frase), m = tamanho(palavra), pos;	
	while (ocorrencia(frase, palavra) == 1){
		pos = pocorrencia(frase, palavra) + 1;

		for (i = pos; i < n; i++){
			frase[i] = frase[i + m];
		}

		insercao(frase, nova, pos);
	}
}
