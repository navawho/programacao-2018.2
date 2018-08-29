#include <stdio.h>

int main(void)
{
printf("Digite, respectivamente, o operando, o operador e o outro operando da expressao\n");
float op1,op3,res;
char op2;
scanf("%f%c%f",&op1,&op2,&op3);
switch(op2)
{
    case '+': (res = op1+op3);break;
    case '-': (res = op1-op3);break;
    case '/': (res = op1/op3);break;
    case '*': (res = op1*op3);break;
    default: printf("Entre um operador valido!\n");
}
printf("%f\n",res);



    return 0;
}
