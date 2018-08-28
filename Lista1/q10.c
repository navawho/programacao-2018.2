#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int player,pc,winner;
printf("Digite 0 para pedra\nDigite 1 para papel\nDigite 2 para tesoura\n");
scanf("%d",&player);
pc = rand()%2;
switch(player)
{
case 0: printf("Player = pedra\n");break;
case 1: printf("Player = papel\n");break;
case 2: printf("Player = tesoura\n");break;
}
switch(pc)
{
case 0: printf("PC = pedra\n");break;
case 1: printf("PC = papel\n");break;
case 2: printf("PC = tesoura\n");break;
}
if ((player == 0 && pc == 2) || (player == 1 && pc == 0) || (player == 2 && pc == 1))
{
	printf("Voce ganhou!\n");
}
else if((player == 0 && pc == 1) || (player == 1 && pc == 2) || (player == 2 && pc == 0))
{
	printf("Voce perdeu!\n");
}
else
{
	printf("Empatou!\n");
}





	return 0;
}