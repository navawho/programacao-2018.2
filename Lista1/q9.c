#include <stdio.h>

int main(void)
{
	 float Sinicial, Vinicial, aceleracao, tempo, Sfinal, Vfinal;

	 printf("Digite, respectivamente, o Espaco inicial, Velocidade inicial, aceleracao e tempo \n");
	 scanf("%f%f%f%f",&Sinicial, &Vinicial, &aceleracao, &tempo);

	 Sfinal = Sinicial + Vinicial + (aceleracao*tempo*tempo)/2;
	 Vfinal = Vinicial + aceleracao*tempo;
 

	 printf("%f -> O Espaco Final \n",Sfinal);
     printf("%f -> A Velocidade Final \n",Vfinal);

	return 0;
} 