#include <stdio.h>
#include <math.h>

int primo(int n) {
	if (n == 2) {
		return 1;
	} else if (n<2 || (n%2)==0) {
		return 0;
	} else {
		int lim = (int)sqrt(n);
		for (int i=3; i<= lim; i+=2) {
			if (n% i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main (void){
	int n, x, j;
	int c = 1;
	scanf("%d %d", &n, &x);
	printf("a)\n");
	for (j = 2; j <= n; j++){
		if (primo(j) == 1){
			printf("%d \n", j);
		}
	}
	printf("b)\n");
	while(x != 0){
		c += 1;
		if (primo(c) == 1){
			printf("%d \n", c);
			x -= 1;
		}
	}
	return 0;
}
