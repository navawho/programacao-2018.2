#include <stdio.h>

int main(void)
{
float raio, volume;
scanf("%f", &raio);
volume = (4*3.14*(raio*raio*raio))/3;
printf("%f\n", volume);

	return 0;
}