#include <stdio.h>
#include <math.h>
int main(void)
{
float a,b,c,delta,x1,x2;
printf("Entre os coeficientes a, b e c, respectivamente\n");
scanf("%f%f%f",&a,&b,&c);
if(a == 0)
{
	printf("Entre um a diferente de zero!\n");
}
else
{

delta = ((b*b) - (4*a*c));
printf("Delta eh %f\n", delta);
if (delta<0)
{
	printf("Nao existe raiz real\n");
}
else if (delta==0)
{
	x1 = ((-b)/(2*a));
	x2 = x1;
	printf("Ambas as raizes sao iguais a: %f\n", &x1);
}
else
{
	x1 = ((-b)-(sqrt((b*b)-(4*a*c))))/(2*a);
	x2 = ((-b)+(sqrt((b*b)-(4*a*c))))/(2*a);
	printf("x1 = %f\n", x1);
	printf("x2 = %f\n", x2);
}
}

	return 0;
}