#include <stdio.h>
#define Pi 3.14

float volumeE(float r);
float areaE(float r);

int main(void)
{
	float r;
	printf("Entre o valor do raio: \n");
	scanf("%f", &r);
	float area;
	float volume;
	volume = volumeE(r);
	area = areaE(r);
	printf("Volume = %f\n", volume);
	printf("Area = %f\n", area);
	return 0;
}

float volumeE(float r)
{
float V;
V = (4/3)*Pi*(r*r*r);
return V;
}

float areaE(float r)
{
float A;
A = 4*Pi*(r*r);
return A;
}
