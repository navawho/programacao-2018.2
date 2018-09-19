#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c);
int raizes(double a, double b, double c, double *px1, double *px2);

int main(void)
{
	double a,b,c,d, x1, x2;
	double *px1 = &x1;
	double *px2 = &x2;
	printf("Entre os coeficientes a, b e c, respectivamente\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	if(a==0)
	{
		printf("Entre a diferente de 0");
		return 1;
	}
	d = delta(a,b,c);
	if(d<0)
	{
		printf("A equacao nao possui raiz real");
		return 1;
	}
	int n;
	n = raizes(a,b,c, px1, px2);
	printf("A quantidade de raizes eh: %d\n", n);
	if(n==1)
	{
		printf("x1 = x2 = %lf\n", *px1);
	}
	else
	{
		printf("x1 = %lf\n", *px1);
		printf("x2 = %lf\n", *px2);
	}

	return 0;
}

double delta(double a, double b, double c)
{
	double d;
	d = (b*b) - (4*a*c);
	return d;
}
int raizes(double a, double b, double c, double *px1, double *px2)
{
	int n;
	double d;
	d = delta(a,b,c);
	if(d == 0)
	{
		*px1 = -b/(2*a);
		px2 = px1;
		n = 1;
		return n;
	}
	else
	{
		*px1 = (-b - sqrt(d))/(2*a);
		*px2 = (-b + sqrt(d))/(2*a);
		n = 2;
		return n;
	}
}