
#include <stdio.h>

/* Multiply n x n matrices a and b */
void mmm(int n) {
	int i, j, k;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
				printf("%d\t%d\t%d\n", i*n+j, i*n+k, k*n+j);
}

int main(){
 mmm(8);
 return 1;
}
