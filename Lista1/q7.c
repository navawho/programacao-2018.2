int main(void)
{
float n1,n2,n3, media, mediafinal;
printf("Entre as notas da primeira e segunda prova, respectivamente\n");
scanf("%f\n%f",&n1,&n2);
media = (n1 + n2)/2;
media>=5.0?printf("%f Aprovado",&media):
printf("Entre a nota da terceira prova\n")
scanf("%f",&n3)
n1>n2?mediafinal=(n1+n3)/2:(n2+n3)/2
mediafinal>=5.0?printf("%f Aprovado", &mediafinal):printf("%f Reprovado",&mediafinal );


	return 0;
}