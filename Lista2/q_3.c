#include <stdio.h>

int divisao(int x, int y){
    int resto = x%y;
    return resto;
}

int main (void){
    int num1, num2, num3, mdc, mdc2;
    printf("Escreva 3 numeros inteiros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    //scanf("%d", &num3);
    do{
      
        if (divisao(num1, num2) == 0){
            mdc = num2;
            }
        else {
            mdc = divisao(num1, num2);
            num1 = num2;
            num2 = mdc;
        }
    }while(divisao(num1,num2) != 0);


    do{
        if (divisao(mdc, num3) == 0){
            mdc2 = num3;
            }
        else {
            mdc2 = divisao(mdc, num3);
            mdc = num3;
            num3 = mdc2;
        }
    }while(divisao(mdc,num3) != 0);

    printf("%d -> Mdc \n", mdc2);


    return 0;
}