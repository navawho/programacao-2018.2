#include <stdio.h>
int main(void)
{
int n1, n2, n3, aux;
scanf("%d\n%d\n%d", &n1,&n2,&n3);
if(n2>n1){
	aux = n1;
	n1 = n2;
	n2 = aux;
}

if(n3>n1){
	aux = n1;
	n1 = n3;
	n3 = aux;
}

if(n3>n2){
	aux = n2;
	n2 = n3;
	n3 = aux;
}

printf("i) %d\n", n1);
printf("ii) %d,%d,%d",n3,n2,n1);

	return 0;
}