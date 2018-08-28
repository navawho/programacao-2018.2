#include <stdio.h>
#include <math.h>
int main(void)
{
int r, a,x,y;
printf("Entre o raio e o angulo, respectivamente\n");
scanf("%d %d", &r,&a);
x = r * cos(a);
y = r * sin(a);
printf("x = %d y = %d\n",x,y );


	return 0;
}