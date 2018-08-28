#include <stdio.h>
int main(void)
{
float p1, p2,p3, media, mediafinal;
printf("Entre os valores da p1 e p2, respectivamente");
scanf("%f\n%f", &p1,&p2);
media = (p1*p2)/2;
if(media >= 5.0 & p1 > 3.0 & p2>3.0){
	printf("Parabens, voce passou com uma media de %f\n",media);
}
else
printf("Entre o valor da p3\n");
scanf("%f\n", &p3);
p1>p2?mediafinal=(p1+p3)/2:mediafinal=(p2+p3)/2;
mediafinal>=5.0?printf("Parabens, voce foi aprovado\n"):printf("Voce nao foi aprovado\n");


	return 0;
}