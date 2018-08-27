#include <stdio.h>

int main(void)
{
float pdolar,pgalao, pgasosa;

printf("Digite o preco do galao em dolares:"); 
scanf("%f",&pgalao);
printf("Digite o preco do dolar:"); 
scanf("%f",&pdolar);
pgasosa = (pgalao/3.7854)*pdolar;
printf("O valor da conversao = %f\n", pgasosa);

return 0;
} 