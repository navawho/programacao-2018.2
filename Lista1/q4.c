#include <stdio.h>
int main(void)
{
int valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
notas100 = 0;
notas50 = 0;
notas20 = 0;
notas10 = 0;
notas5 = 0;
notas2 = 0;
notas1 = 0;
scanf("%d", &valor);
while(valor >= 100){
	valor -= 100;
	++notas100;
}
while(valor >= 50){
	valor -= 50;
	++notas50;
}
while(valor >= 20){
	valor -= 20;
	++notas20;
}
while(valor >= 10){
	valor -= 10;
	++notas10;
}
while(valor >= 5){
	valor -= 5;
	++notas5;
}
while(valor >= 2){
	valor -= 2;
	++notas2;
}
if(valor==1){
	notas1 = 1;
}

printf("%d notas de 100\n", notas100);
printf("%d notas de 50\n", notas50);
printf("%d notas de 20\n", notas20);
printf("%d notas de 10\n", notas10);
printf("%d notas de 5\n", notas5);
printf("%d notas de 2\n", notas2);
printf("%d nota de 1", notas1);


	return 0;
}