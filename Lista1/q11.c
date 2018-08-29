#include <stdio.h>

int main(void)
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if (((abs(b-c)<a) && (a<b+c)) && ((abs(a-c)<b) && (b<a+c)) && ((abs(a-b)<c) && (c<a+b)))
{
	if ((a=b && b=c))
	{
		printf("O triangulo eh equilatero");
	}
	else if ((a!=b && b!=c && a!=c))
	{
		printf("O triangulo eh escaleno");
	}
	else
	{
		printf("O triangulo eh isosceles");
	}
}
else
{
	printf("Nao eh um triangulo");
}




	return 0;
}