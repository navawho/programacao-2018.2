#include <stdio.h>
int main(void)
{
int segundos;
int minutos = 0;
int horas = 0;
scanf("%d",&segundos);
while (segundos >= 60){
	segundos -= 60;
	++minutos;
}
while (minutos >= 60){
	minutos -= 60;
	++horas;
}
printf("%02d:%02d:%02d\n", horas, minutos, segundos);



	return 0;
}